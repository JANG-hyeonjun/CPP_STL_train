// Setionc_03_반환타입과_매개변수타입을인자로갖는함수객체.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

template<typename RetType,typename ArgType>
class Functor
{
public:
    RetType operator() (ArgType data)
    {
        std::cout << data << std::endl;
        return RetType();
        //반환타입을 반환하려면 이렇게 지정해주어야한다.
        //void는 상관이 없지만 다른 자료형을 위해 
    }
};
template<typename ArgType>
class Functor<bool,ArgType>
{
public:
    bool operator() (ArgType data)
    {
        std::cout << "특수: " << data << std::endl;
        if (data == "Hello!")
        {
            return true;
        }
        return false;
    }
};


int main()
{
    Functor<void, int> functor1;
    functor1(10);
    Functor<bool, std::string> functor2;
    bool flag = functor2("Hello!");

    std::cout << flag << std::endl;

    return 0;
}

