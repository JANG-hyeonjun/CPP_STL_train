// Section_02_STL의Less함수객체.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <functional> //less <>의 헤더

typedef std::less<int> Less;

int main()
{
	Less l;

	std::cout << l(10, 20) << std::endl;
	std::cout << l(20, 10) << std::endl; //암묵적 호출
	std::cout << l.operator() (10, 20) << std::endl; //명시적 호출 

	std::cout << Less() (10, 20) << std::endl;
	std::cout << Less() (20, 10) << std::endl;

	std::cout << Less().operator() (10, 20);

	return 0;
}
