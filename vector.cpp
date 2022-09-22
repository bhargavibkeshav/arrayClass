#include<iostream>
#include<vector>
using namespace std;

template<typename T>
class Vector
{
    T* m_data = nullptr;
    size_t m_size = 0;
    size_t m_cap = 0;

    void Realloc(size_t new_cap)
    {
        T* new_block = new T[new_cap];
        //if shrinking
        if(m_size > new_cap)
        {
            m_size = new_cap;
        }
        //if growing
        for(int i =0;i<m_size;i++)
        {
            new_block[i] = move(m_data[i]);
        }
        delete[] m_data;
        m_data = new_block;
        m_cap = new_cap;
    }
 public:
    Vector()
    {
        Realloc(2);
    }
    void pushBack(const T& value)
    {
        if(m_size >= m_cap)
        {
            Realloc(m_cap + (m_cap/2));
        }
        m_data[m_size] = value;
        m_size++;
    }
    size_t Size() const
    {
        return m_size;
    }
    T& operator[](size_t index)
    {
        return m_data[index];
    }
    const T& operator[](size_t index) const
    {
        return m_data[index];
    }
    T& at(size_t index)
    {
        return m_data[index];
    }
    const T& at(size_t index) const
    {
        return m_data[index];
    }
    const void swap(T* val1, T* val2)
    {
        T t = *val1;
        *val1 = *val2;
        *val2 = t;
    }

};

int main()
{
    Vector<int> v;
    vector<int>v1;
    v.pushBack(5);
    v.pushBack(2);
    v.pushBack(1);
    cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v.Size();
}