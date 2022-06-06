// Section_01_find_first_of.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	//find_first_of()알고리즘은 두 순차열을 비교하여 모든 원소 중 같은 원소가 하나라도 
	//발견되면 발견된 첫원소의 반복자를 반환한다.

	std::vector<int> vec1;
	
	for (size_t idx = 0; idx < 5; ++idx)
	{
		vec1.emplace_back((idx + 1) * 10);
	}

	std::vector<int> vec2;
	vec2.emplace_back(40);
	vec2.emplace_back(80);
	vec2.emplace_back(20);

	std::cout << "vec1: ";
	for(std::vector<int>::size_type idx = 0; idx < vec1.size(); ++idx)
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

	std::vector<int>::iterator iter;
	iter = std::find_first_of(vec1.begin(), vec1.end(), vec2.begin(), vec2.end());
	if (iter != vec1.end())
	{
		std::cout << *iter << std::endl;
	}

	return 0;
}

