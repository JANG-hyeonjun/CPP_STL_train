// Section_07_타입변환.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class A
{
};

class B
{
public:
	//사용자가 직접 정의해서 사용할수 있는 타입변환은 두가지
	// 생성자를 이용한 타입변환 
	// 타입 변환 연산자 오버로딩을 이용한 타입변환 
	//타입 변환 연산자는 생성자나 소멸자 처럼 반환 타입을 지정하지 않는다.
	operator A()
	{
		std::cout << "operator A() 호출" << std::endl;
		return A();
	}
	operator int()
	{
		std::cout << "operator int() 호출" << std::endl;
		return 10;
	}
	operator double()
	{
		std::cout << "operator double () 호출" << std::endl;
		return 5.5;
	}
};


int main()
{
	A a;
	int n;
	double d;

	B b;
	a = b; //b.operator A() 암시적 호출 
	n = b; //b.operator int() 암시적 호출 
	d = b; //b.operator double() 암시적 호출 
	
	std::cout << std::endl;

	a = b.operator A();
	n = b.operator int();
	d = b.operator double();
	
	return 0;
}

