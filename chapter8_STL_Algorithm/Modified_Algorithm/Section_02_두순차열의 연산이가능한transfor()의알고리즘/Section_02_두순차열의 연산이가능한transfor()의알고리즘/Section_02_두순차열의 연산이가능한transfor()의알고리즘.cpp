// Section_02_두순차열의 연산이가능한transfor()의알고리즘.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <algorithm>
#include <vector>

int Plus(int left, int right)
{
	return left + right;
}

int main()
{
	std::vector<int> vec1;
	for (size_t idx = 0; idx < 5; ++idx)
	{
		vec1.emplace_back((idx + 1) * 10);
	}

	std::vector<int> vec2;
	for (size_t idx = 0; idx < 5; ++idx)
	{
		vec2.emplace_back((idx + 1));
	}

	std::vector<int>vec3(5, 0);

	std::vector<int>::iterator iter_end;
	iter_end = std::transform(vec1.begin(), vec1.end(), vec2.begin(), vec3.begin(), std::plus<int>());

	std::cout << "vec1: ";
	for (std::vector<int>::size_type idx = 0; idx < vec1.size(); ++idx)
	{
		std::cout << vec1.at(idx) << " ";
	}
	std::cout << std::endl;

	std::cout << "vec2: ";
	for (std::vector<int>::size_type idx = 0; idx < vec2.size(); ++idx)
	{
		std::cout << vec2.at(idx) << " ";
	}
	std::cout << std::endl;

	std::cout << "vec3: ";
	for (std::vector<int>::size_type idx = 0; idx < vec3.size(); ++idx)
	{
		std::cout << vec3.at(idx) << " ";
	}
	std::cout << std::endl;

	std::cout << "[vec3.begin(), iter_end()): ";
	for (std::vector<int>::iterator iter = vec3.begin(); iter != iter_end; ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	return 0;
}

