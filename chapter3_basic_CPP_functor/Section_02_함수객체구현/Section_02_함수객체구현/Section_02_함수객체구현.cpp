// Section_02_함수객체구현.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


bool Pred_less(int a, int b)
{
    return a < b;
}

class Less
{
public:
    bool operator() (int a, int b)
    {
        return a < b;
    }
};

int main()
{
    Less l;

    std::cout << Pred_less(10, 20) << std::endl;
    std::cout << Pred_less(20, 10) << std::endl;

    std::cout << std::endl;

    std::cout << l(10, 20) << std::endl; //l 객체로 암묵적 함수 호출 
    std::cout << l(20, 10) << std::endl; //ㅣ 객체로 암묵적 함수 호출 

    std::cout << Less() (10, 20) << std::endl; //임시 객체로 암묵적 함수 호출 
    std::cout << Less() (20, 10) << std::endl; //임시 객체로 암묵적 함수 호출 
    std::cout << std::endl;

    std::cout << l.operator() (10, 20) << std::endl; //명시적 호출 
    std::cout << l.operator() (20, 10) << std::endl; //명시적 호출 

    return 0;
}

