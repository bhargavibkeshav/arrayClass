#include<iostream>
#include<array>
using namespace std;

class Logger
{
    int log_num;
public:
    Logger(int num) 
    {
        log_num = num;
        if(log_num==1)
        {
            cout<<"array index out of bounds";
        }
    }
};
template<typename T, size_t S>
class arr
{
    T m_arr[S];
public:
    //get array size
    int size() const
    {
        return S;
    }
    //get address of element at index
    T& operator[](size_t index)
    {
        if(index>=S)
        {
            Logger* l = new Logger(1);
            exit;
        }
        return m_arr[index];
    }
    const T& operator[](size_t index) const
    {
        if(index>=S)
        {
            Logger* l = new Logger(1);
            exit;
        }
        return m_arr[index];
    }
    //get element at index
    const T& at(size_t index) const
    {
        if(index>=S)
        {
            Logger* l = new Logger(1);
            exit;
        }
        return m_arr[index];
    }
    bool isEmpty() const
    {
        if(S==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    arr<int,5> a;
    arr<int,0> b;
    a[1] = 2;
    cout<<a.at(5);
    array<int,8> ad;
     
}