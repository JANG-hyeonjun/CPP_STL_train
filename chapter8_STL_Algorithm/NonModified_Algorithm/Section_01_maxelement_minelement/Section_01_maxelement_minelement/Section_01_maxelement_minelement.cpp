// Section_01_maxelement_minelement.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> vec;
	vec.emplace_back(30);
	vec.emplace_back(10);
	vec.emplace_back(20);
	vec.emplace_back(50);
	vec.emplace_back(40);

	std::vector<int>::iterator iter;
	iter = std::max_element(vec.begin(), vec.end());
	std::cout << *iter << std::endl;

	iter = std::min_element(vec.begin(), vec.end());
	std::cout << *iter << std::endl;

	return 0;
}

