// Section_01_함수포인터선언및사용.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void Print(int n)
{
    std::cout << "정수: " << n << std::endl;
}




int main()
{
    void(*pf)(int);
    //함수포인터 선언 주의해야 할것은 함수포인터는 해당함수의 주소를 가지고 있으며 
    //*을 통한 참조 연산(메모리 접근)도 함수의 주소라는 것이다.
    pf = Print;
    
    Print(10);
    pf(10);
    (*pf)(10); // == pf(10)

    std::cout << std::endl;
    std::cout << Print << std::endl;
    std::cout << pf << std::endl;
    std::cout << *pf << std::endl;

    return 0;
}
