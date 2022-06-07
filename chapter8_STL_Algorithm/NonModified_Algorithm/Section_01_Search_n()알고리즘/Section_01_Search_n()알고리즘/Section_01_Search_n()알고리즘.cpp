// Section_01_Search_n()알고리즘.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>
bool Pred(int left, int right)
{
	return abs(right - left) <= 5;
}

int main()
{
	std::vector<int> vec;
	vec.emplace_back(10);
	vec.emplace_back(20);
	vec.emplace_back(30);
	vec.emplace_back(30);
	vec.emplace_back(30);
	vec.emplace_back(40);
	vec.emplace_back(50);

	std::vector<int>::iterator iter;
	iter = std::search_n(vec.begin(), vec.end(), 3, 30);
	if (iter != vec.end())
	{
		std::cout << "*iter " << *iter << std::endl;
		std::cout << "*iter + 1 " << *(iter + 1) << std::endl;
		std::cout << "*iter - 1 " << *(iter - 1) << std::endl;
	}

	//조건자 버전은 해당 순차열에 Pred(*p,val))인 원소가 3번이상 연속한 첫번째 반복자를 반환 받음
	std::vector<int> v;
	v.emplace_back(10);
	v.emplace_back(20);
	v.emplace_back(32);
	v.emplace_back(28);
	v.emplace_back(33);
	v.emplace_back(40);
	v.emplace_back(50);

	iter = search_n(v.begin(), v.end(), 3, 30, Pred);
	//Pred(*p,30)
	if (iter != v.end())
	{
		std::cout << "*iter " << *iter << std::endl;
		std::cout << "*iter + 1 " << *(iter + 1) << std::endl;
		std::cout << "*iter - 1 " << *(iter - 1) << std::endl;
	}


	return 0;
}

