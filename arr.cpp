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
            cout<<"array index out of bounds.";
        }
    }
};
template<typename T, size_t S>
class arr
{
    T m_arr[S];
public:
    //get array size
    const int size() const
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
    const bool isEmpty() const
    {
        if(S==0)return true;
        else return false;
    }
    constexpr void swap(T* val1, T* val2)
    {
        T temp = *val1;
        *val1 = *val2;
        *val2 = temp;
    }
    const T* begin() const
    {
        return &(m_arr[0]);
    }
};

int main()
{
    arr<int,2> a;
    arr<int,2> b;
    a[0] = 1;
    a[1] = 2;
    
    swap(a[0],b[0]);
    cout<<*(a.begin());
}