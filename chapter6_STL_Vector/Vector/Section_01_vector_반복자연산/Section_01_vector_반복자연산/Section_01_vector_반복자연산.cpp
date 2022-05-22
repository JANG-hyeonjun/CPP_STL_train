// Section_01_vector_반복자연산.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vec;

	for (int i = 0; i < 5; ++i)
	{
		vec.emplace_back(10 * (i + 1));
	}

	std::vector<int>::iterator iter = vec.begin();
	std::cout << *iter << std::endl;
	
	iter += 2;
	std::cout << *iter << std::endl;

	iter -= 1;
	std::cout << *iter << std::endl;

	
	return 0;
//만약 반복자가 가리키는 원소의 값을 변경하지 않는다면 상수 반복자를 사용하는 것이 좋다.

