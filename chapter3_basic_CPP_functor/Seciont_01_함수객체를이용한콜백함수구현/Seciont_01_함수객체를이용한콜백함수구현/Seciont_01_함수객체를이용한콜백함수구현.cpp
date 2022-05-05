// Seciont_01_함수객체를이용한콜백함수구현.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <algorithm>

struct Functor1
{
    void operator() (int n)
    {
        std::cout << n << " ";
    }
};

struct Functor2
{
    void operator() (int n)
    {
        std::cout << n * n << " ";
    }
};

struct Functor3
{
    void operator() (int n)
    {
        std::cout << "정수: " << n << std::endl;
    }
};


int main()
{
    int arr[5] = { 10,20,30,40,50 };

    std::for_each(arr, arr + 5, Functor1()); //임시 함수객체 (Functor 1())을 만들어서 함수로 전달 
    //어떻게 타입이 다른데 전달? 함수 오버로딩을 한것도 아닌데 템플릿을 이용해 만들어져 있다는 의미
    std::cout << std::endl;
    std::for_each(arr, arr + 5, Functor2()); //임시 함수객체 (Functor 2())을 만들어서 함수로 전달 
    std::for_each(arr, arr + 5, Functor3()); //임시 함수객체 (Functor 3())을 만들어서 함수로 전달 

    return 0;
}
