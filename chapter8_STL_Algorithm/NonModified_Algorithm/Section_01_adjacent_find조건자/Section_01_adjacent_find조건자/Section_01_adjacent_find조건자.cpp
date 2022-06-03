// Section_01_adjacent_find조건자.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>

bool pred(int a, int b)
{
	return abs(b - a) > 10;
}

int main()
{
	std::vector<int> vec;
	
	vec.emplace_back(10);
	vec.emplace_back(20);
	vec.emplace_back(30);
	vec.emplace_back(50);
	vec.emplace_back(90);


	for (std::vector<int>::size_type i = 0; i < vec.size(); ++i)
	{
		std::cout << vec[i] << " ";
	}
	std::cout << std::endl;

	std::vector<int>::iterator iter;
	iter = std::adjacent_find(vec.begin(), vec.end(),pred);

	if (iter != vec.end())
		std::cout << *iter << std::endl;
	
	for (; iter != vec.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;
	
	return 0;
}

