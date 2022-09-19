#include<iostream>

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
};
int main()
{
    arr<int,5> a;
    a[4] = 3;
}