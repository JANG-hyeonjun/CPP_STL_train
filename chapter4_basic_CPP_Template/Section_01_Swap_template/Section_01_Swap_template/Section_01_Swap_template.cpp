// Section_01_Swap_template.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

template <typename T>
void Swap(T& a, T& b)
{
	T temp = a; // T temp(a)
	a = b; //a.operator=(b)
	b = temp; //b.operator=(temp)

	//단순히 가능하다는 것에만 의미를 두지말고 천천히 고민해 보면 
	//분명 이런것이 가능하려면 즉 어떤 타입의 객체든 올수 있으려면 인터페이스가 지원되었다는것
	//그러므로 T temp = a 는 분명 복사 생성자가 호출 되었으며 왜냐면 디폴트 복사 생성자가 존재 할테니까
	//a = b , b = temp 문장에서 대입 연산자를 호출하므로 대입연산자(인터페이스)를 지원한다.
}


int main()
{
	int n1 = 10, n2 = 20;
	double d1 = 1.1, d2 = 2.2;

	std::cout << n1 << ", " << n2 << std::endl;
	Swap(n1, n2);
	std::cout << n1 << ", " << n2 << std::endl;

	std::cout << d1 << ", " << d2 << std::endl;
	Swap(d1, d2);
	std::cout << d1 << ", " << d2 << std::endl;

	return 0;
}

