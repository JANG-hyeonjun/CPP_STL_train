// Section_07_타입변환연산자오버로딩.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

//사용자가 직접 정의해서 사용할수 있는 타입 변환은 두가지가 있습니다. 
//첫째: 생성자를 이용한 타입변환 
//둘째: 타입변환 연산자 오버로딩을 이용한 타입변환 

class A
{

};

class B
{
public:
    B() { std::cout << "B() 생성자" << std::endl;}
    B(A& a) { std::cout << "A& a 생성자" << std::endl; }
    B(int n) { std::cout << "int n 생성자" << std::endl; }
    B(double d) { std::cout << "double d 생성자" << std::endl; }
};
//이렇게 형변환이 원할하게 일어나게 되면 버그를 유발하게 되기때문에 
//생성자를 이용한 형변환을 의도하지않는다면 explicit 키워드를 사용 
//암시적인 생성자 형변환을 의도하지 않는한 "인자를 갖는 생성자는 모두 explicit 생성자로 만들자"

int main()
{
    A a;
    int n = 10;
    double d = 5.5;
    B b; //B() 생성자 호출 
    b = a; // b = B(a)를 호출   
    b = n; // b = B(n)를 호출   
    b = d; // b = B(d)를 호출   

    return 0;
}

