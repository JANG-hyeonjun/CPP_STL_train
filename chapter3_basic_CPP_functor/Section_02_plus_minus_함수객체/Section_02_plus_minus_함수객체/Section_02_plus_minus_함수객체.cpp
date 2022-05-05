// Section_02_plus_minus_함수객체.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <functional>

class Plus
{
public:
	int operator() (int a, int b)
	{
		return a + b;
	}
};

class Minus
{
public:
	int operator() (int a, int b)
	{
		return a - b;
	}
};

int main()
{
	std::cout << Plus() (10, 20) << std::endl;
	std::cout << Plus() (20, 10) << std::endl;

	std::cout << Minus() (10, 20) << std::endl;
	std::cout << Minus() (20, 10) << std::endl;

	std::cout << std::endl;

	std::cout << std::plus<int>() (10, 20) << std::endl;
	std::cout << std::plus<int>() (20, 10) << std::endl;

	std::cout << std::minus<int>() (10, 20) << std::endl;
	std::cout << std::minus<int>() (20, 10) << std::endl;

	return 0;
}

