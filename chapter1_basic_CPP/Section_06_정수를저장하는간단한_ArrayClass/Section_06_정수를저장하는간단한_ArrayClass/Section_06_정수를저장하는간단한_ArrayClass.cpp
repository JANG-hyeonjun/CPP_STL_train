// Section_06_정수를저장하는간단한_ArrayClass.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Array
{
private:    
    int* arr;
    int size;
    int capacity;
public:
    Array(int cap = 100) :arr(0), size(0), capacity(cap)
    {
        arr = new int[capacity];
    }
    ~Array()
    {
        delete []arr;
    }
    void Add(int data)
    {
        if (size < capacity)
        {
            arr[size++] = data;
        }
    }
    int Size() const
    {
        return size;
    }
    int operator[](int idx) const
    {
        return arr[idx];
    }
    int& operator[](int idx)
    {
        return arr[idx];
    }
};

int main()
{
    Array ar(10);
    ar.Add(10);
    ar.Add(20);
    ar.Add(30);

    /*for (int i = 0; i < ar.Size(); i++)
    {
        std::cout << ar[i] << std::endl;
    }*/

    std::cout << ar[0] << std::endl;
    std::cout << std::endl;

    const Array& ar2 = ar;
    std::cout << ar2[0] << std::endl;
    std::cout << std::endl;

    ar[0] = 100;
    //ar2[0] = 100;

    return 0;
}

