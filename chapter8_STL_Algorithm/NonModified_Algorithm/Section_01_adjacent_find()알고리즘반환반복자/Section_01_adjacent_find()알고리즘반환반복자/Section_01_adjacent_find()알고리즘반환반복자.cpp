// Section_01_adjacent_find()알고리즘반환반복자.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> vec;
	
	for (size_t idx = 0; idx < 5; ++idx)
	{
		vec.emplace_back((idx + 1) * 10);
	}

	for (std::vector<int>::size_type idx = 0; idx < vec.size(); ++idx)
	{
		std::cout << vec[idx] << " ";
	}
	std::cout << std::endl;

	std::vector<int>::iterator iter;
	std::vector<int>::iterator iter_b = vec.begin();
	std::vector<int>::iterator iter_e = vec.begin() + 2;

	//구간 [iter_b, iter_e)의 순차열은 10,20 이므로
	//찾는 원소가 없어 iter구간의 끝인 iter_e입니다.
	iter = std::adjacent_find(iter_b, iter_e);
	
	if (iter != iter_e) //찾은 원소가 없는지 확인 <<맞는표현>> 
		std::cout << *iter << std::endl;
	
	std::cout << "=======================" << std::endl;
	if (iter != vec.end()) //찾은 원소가 없는지 확인 <<틀린표현>>
		std::cout << *iter << std::endl;

	iter_b = vec.begin();
	iter_e = vec.end();
	iter = std::adjacent_find(iter_b, iter_e);
	
	//모두 맞는지 확인 
	if (iter != iter_e)
		std::cout << *iter << std::endl;
	if (iter != vec.end())
		std::cout << *iter << std::endl;

	return 0;
}

