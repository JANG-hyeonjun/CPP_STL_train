// Section_02_replace_알고리즘.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> vec;

	vec.emplace_back(10);
	vec.emplace_back(20);
	vec.emplace_back(30);
	vec.emplace_back(40);
	vec.emplace_back(30);
	vec.emplace_back(30);
	vec.emplace_back(50);

	std::cout << "vec: ";
	for (std::vector<int>::size_type idx = 0; idx < vec.size(); ++idx)
	{
		std::cout << vec.at(idx) << " ";
	}
	std::cout << std::endl;

	std::replace(vec.begin(), vec.end(), 30, 0);
	//순차열의 원소 30을 모두 0으로 수정하는 replace알고리즘

	std::cout << "vec: ";
	for (std::vector<int>::size_type idx = 0; idx < vec.size(); ++idx)
	{
		std::cout << vec.at(idx) << " ";
	}
	std::cout << std::endl;

	return 0;
}

