// Section_06_STL에필요한연산자오버로딩.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

struct FunObject
{
public:
    void operator()(int arg) const
    {
        std::cout << "정수: " << arg << std::endl;
    }
    void operator()(int arg1, int arg2) const
    {
        std::cout << "정수: " << arg1 << ','<< arg2 << std::endl;
    }
    void operator()(int arg1, int arg2,int arg3) const
    {
        std::cout << "정수: " << arg1 << ',' << arg2 << ',' << arg3 << std::endl;
    }
};

void Print1(int arg) 
{
    std::cout << "정수: " << arg << std::endl;
}


int main()
{
    
    //void (*Print2)(int) = Print1;
    //FunObject Print3;

    //Print1(10); //첫째: '함수'를 사용한 정수 출력 
    //Print2(10); //둘째: '함수포인터를 사용한 정수 출력
    //Print3(10); //셋째: '함수객체'를 사용한 정수 출력 (Print3.operatro(10)과 깉음 이것을 펑터 라고 한다
    
    FunObject print;
    print(10); //객체 생성후 호출 (암시적) 
    print(10,20);
    print(10, 20,30);
    std::cout << std::endl;
    
    print.operator()(10); //객체 생성후 호출 (명시적)
    print.operator()(10,20);
    print.operator()(10,20,30);
    std::cout << std::endl;

    FunObject() (10); //임시객체로 호출(암시적)
    FunObject() (10, 20);
    FunObject() (10, 20, 30);
    std::cout << std::endl;

    FunObject().operator()(10); //임시객체로 호출(명시적)
    FunObject().operator()(10,20);
    FunObject().operator()(10, 20,30);
    //임시객체는 그문장에서 생성되고 그문장을 벗어나면 소멸되어짐 

    return 0;
}

