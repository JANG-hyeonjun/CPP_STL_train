// Section_02_함수객체를적용한_sort알고리즘.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{	
	std::vector<int> v;
	v.emplace_back(50);
	v.emplace_back(10);
	v.emplace_back(20);
	v.emplace_back(40);
	v.emplace_back(30);

	sort(v.begin(), v.end(), std::less<int>());
	for (auto iter = v.begin(); iter != v.end(); ++iter)
	{
		std::cout << *iter << std::endl;
	}

	std::cout << std::endl;

	sort(v.begin(), v.end(), std::greater<int>());
	for (auto iter = v.begin(); iter != v.end(); ++iter)
	{
		std::cout << *iter << std::endl;
	}

	return 0;
}

