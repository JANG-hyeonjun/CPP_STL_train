// Problem_01.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Equal
{
public:
	bool operator() (int a, int b) const
	{
		return a == b ? true : false;
	}
};

class Adder
{
public:
	int operator() (int a, int b) const
	{
		return a + b;
	}
};

int main()
{
	Equal cmp;
	if (cmp(10, 10))
	{
		std::cout << "같다." << std::endl;
	}
	else
	{
		std::cout << "다르다." << std::endl;
	}

	Adder add;
	int sum = add(10, 20);
	std::cout << "sum= " << sum << std::endl;

	return 0;
}


