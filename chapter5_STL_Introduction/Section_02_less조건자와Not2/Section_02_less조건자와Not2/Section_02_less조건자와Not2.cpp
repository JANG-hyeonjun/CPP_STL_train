// Section_02_less조건자와Not2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <functional>



int main()
{
	std::cout << std::less<int>() (10, 20) << std::endl; //임시 less 객체 비교
	std::cout << std::less<int>() (20, 20) << std::endl; 
	std::cout << std::less<int>() (20, 10) << std::endl;
	std::cout << "======================" << std::endl;

	//임시 객체 less에 not2 어댑터 적용 
	std::cout << std::not2(std::less<int>())(10,20) << std::endl;
	std::cout << std::not2(std::less<int>())(20,20) << std::endl;
	std::cout << std::not2(std::less<int>())(20,10) << std::endl;
	std::cout << std::endl;

	std::less<int> l;
	std::cout << l(10, 20) << std::endl;
	std::cout << l(20, 20) << std::endl;
	std::cout << l(20, 10) << std::endl;
	std::cout << "======================" << std::endl;

	std::cout << std::not2(l)(10, 20) << std::endl;
	std::cout << std::not2(l)(20, 20) << std::endl;
	std::cout << std::not2(l)(20, 10) << std::endl;


	return 0;
}

