// Section_02_함수포인터를이용한_콜백메커니즘.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include<algorithm>

/// <summary>
/// 서버
/// 배열의 모든원소 반보적인 작업을 수앵하게 추상화</summary>

void For_each(int* begin, int* end, void (*pf) (int))
{
    while (begin != end)
    {
        pf(*begin++);
    }
}

void Print1(int n)
{
    std::cout << n << ' ';
}

void Print2(int n)
{
    std::cout << n * n << ' ';
}


void Print3(int n)
{
    std::cout << "정수: " << n << std::endl;
}



int main()
{
    
    int arr[5] = { 10,20,30,40,50 };

    std::for_each(arr, arr + 5, Print1);
    std::cout << std::endl;
    std::for_each(arr, arr + 5, Print2);
    std::cout << std::endl;
    std::for_each(arr, arr + 5, Print3);

    return 0;
}


