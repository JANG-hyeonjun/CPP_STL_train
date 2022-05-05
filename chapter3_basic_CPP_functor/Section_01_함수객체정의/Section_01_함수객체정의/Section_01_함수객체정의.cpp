// Section_01_함수객체정의.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void Print()
{
    std::cout << "전역함수!" << std::endl;
}

class Functor
{
public:
    void operator() ()
    {
        std::cout << "함수 객체 " << std::endl;
    }
};

int main()
{
    Functor functor;
    functor(); // functor.operator()

    Print();

    return 0;
}

//함수 객체는 함수처럼 동작하는 객체이다. 함수처럼 동작하려면 객체가'()"연산자를 정의하고 있어야한다.
//즉 연산자 오버로딩을 말함 

