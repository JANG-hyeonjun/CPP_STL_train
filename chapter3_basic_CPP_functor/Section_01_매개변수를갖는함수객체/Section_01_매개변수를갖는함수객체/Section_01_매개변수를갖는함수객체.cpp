#include <iostream>

void Print(int a,int b)
{
    std::cout << "전역함수:" << a << ',' << b << std::endl;
}

class Functor
{
public:
    void operator() (int a,int b)
    {
        std::cout << "함수 객체 "<< a <<',' << b << std::endl;
    }
};

int main()
{
    Functor functor;
    functor(10,20); // functor.operator()

    Print(10,20);

    return 0;
}

//함수 객체는 함수처럼 동작하는 객체이다. 함수처럼 동작하려면 객체가'()"연산자를 정의하고 있어야한다.
//즉 연산자 오버로딩을 말함 

//그러면 일반함수 말고 함수객체를 사용하는 이유는? -> 함수처럼 동작하는 객체이기에 다른 멤버변수와 멤버함수를 가질수 있고
//함수 객체의 서명이 같더라도 객체 타입이 다르면 서로 전혀 다른타입으로 인식 
//함수 포인터는 인라인 될 수 없지만 (함수 포인터는 함수가 있어야하므로 인라인 함수의 복사본을 만들어 낸다)
//함수 객체는 인라인될수 있고 컴파일러가 쉽게 최적화 
