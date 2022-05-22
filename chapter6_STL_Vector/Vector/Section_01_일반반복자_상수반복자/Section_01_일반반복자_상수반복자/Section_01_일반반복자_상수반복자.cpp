// Section_01_일반반복자_상수반복자.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vec;

	for (size_t idx = 0; idx < 5; ++idx)
	{
		vec.emplace_back(10 * (idx + 1));
	}

	//만약 반복자가 가리키는 원소의 값을 변경하지 않는다면 상수반복자를 반복하는것이 좋다
	//일반 반복자(iterator)는 포인터 (int*)와 비슷하고 상수 반복자(const_iterator)는 
	//상수 포인터 와 비슷하다. (const int *)

	std::vector<int>::iterator iter = vec.begin();
	std::vector<int>::const_iterator citer = vec.begin();

	std::cout << *iter << std::endl;
	std::cout << *citer << std::endl;

	std::cout << *++iter << std::endl;
	std::cout << *++citer << std::endl;

	*iter = 100;
	//*citer = 100;
	std::cout << *iter << std::endl;

	//const std::vector<>::iterator -> *const 처럼 동작하여 반복자를 이동할수 없음을 주의

	return 0;
}

