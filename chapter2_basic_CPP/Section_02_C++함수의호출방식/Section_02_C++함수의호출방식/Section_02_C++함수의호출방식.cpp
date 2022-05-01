// Section_02_C++함수의호출방식.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

//C++ 에서는 정적함수 와 멤버함수가 존재 
//정적 함수로는 전역 함수, namespace내의 전역함수, static 멤버 함수 
//멤버 함수는 객체와 주소로 함수 호출 

void Print()
{
    std::cout << "정적 함수 Print()" << std::endl;
}

class Point
{
public:
    void Print()
    {
        std::cout << "멤버함수 Print()" << std::endl;
    }
};

int main()
{
    
    Point pt;
    Point* p = &pt;

    Print(); //첫째 정적함수 호출 
    pt.Print(); //둘째 객체로 멤버함수 호출
    p->Print(); //셋째, 주소로 멤버함수 호출


    return 0;
}

