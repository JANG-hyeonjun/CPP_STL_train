// Section_01_조건자버전equal()알고리즘.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>


bool Pred(int left, int right)
{
	return abs(right - left) < 5;
}

int main()
{
	std::vector<int> vec1;
	vec1.emplace_back(10);
	vec1.emplace_back(21);
	vec1.emplace_back(30);

	std::vector<int> vec2;
	vec2.emplace_back(10);
	vec2.emplace_back(20);
	vec2.emplace_back(33);

	std::cout << "v1: ";
	for (std::vector<int>::size_type idx = 0; idx < vec1.size(); ++idx)
	{
		std::cout << vec1[idx] << " ";
	}
	std::cout << std::endl;

	std::cout << "v2: ";
	for (std::vector<int>::size_type idx = 0; idx < vec2.size(); ++idx)
	{
		std::cout << vec2[idx] << " ";
	}
	std::cout << std::endl;

	if(std::equal(vec1.begin(),vec1.end(),vec2.begin(),Pred))
	{
		std::cout << "두 순차열은 같습니다." << std::endl;
	}

	return 0;
}

