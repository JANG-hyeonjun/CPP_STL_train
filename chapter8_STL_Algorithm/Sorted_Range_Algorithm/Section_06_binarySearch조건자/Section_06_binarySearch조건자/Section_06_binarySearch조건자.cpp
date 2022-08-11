// Section_06_binarySearch조건자.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> vec;

	vec.emplace_back(10);
	vec.emplace_back(30);
	vec.emplace_back(40);
	vec.emplace_back(50);
	vec.emplace_back(20);

	std::cout << "[vec 원본]: ";
	for (const auto& number : vec)
	{
		std::cout << number << " ";
	}
	std::cout << std::endl;

	std::sort(vec.begin(), vec.end());

	std::cout << "[vec 정렬 후]: ";
	for (const auto& number : vec)
	{
		std::cout << number << " ";
	}
	std::cout << std::endl;

	std::cout << "비교 less 찾기: " << std::binary_search(vec.begin(), vec.end(),20, std::less<int>());


	std::sort(vec.begin(), vec.end(),std::greater<int>());

	std::cout << std::endl << "[vec 정렬 후]: ";
	for (const auto& number : vec)
	{
		std::cout << number << " ";
	}
	std::cout << std::endl;

	std::cout << "비교 찾기: " << std::binary_search(vec.begin(), vec.end(), 20, std::greater<int>());

	
	return EXIT_SUCCESS;
}

