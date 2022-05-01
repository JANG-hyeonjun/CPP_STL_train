// Section_02_정적함수포인터.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


void Print(int n)
{
	std::cout << "전역함수: " << n << std::endl;
}

namespace A
{
	void Print(int n)
	{
		std::cout << "namespace A 전역함수: " << n << std::endl;
	}
}

class Point
{
public:
	static void Print(int n)
	{
		std::cout << "Point 클래스의 정적 멤버함수: " << n << std::endl;
	}
};

int main()
{
	void (*pf)(int); //정적 함수 포인터 선언 

	Print(10);
	A::Print(10);
	Point::Print(10);

	pf = Print;
	pf(10);
	pf = A::Print;
	pf(10);
	pf = Point::Print;
	pf(10);


	return 0;
}

