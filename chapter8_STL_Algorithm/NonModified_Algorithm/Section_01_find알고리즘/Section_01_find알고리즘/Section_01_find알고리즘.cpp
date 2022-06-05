// Section_01_find알고리즘.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>


bool Pred(int n)
{
	return 35 < n;
}

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

	std::vector<int>::iterator iter;
	iter = std::find(vec.begin(), vec.end(), 20);

	if (iter != vec.end())
	{
		std::cout << *iter << "을 찾았다!" << std::endl;
	}

	iter = std::find_if(vec.begin(), vec.end(), Pred);
	if (iter != vec.end())
	{
		std::cout << "순차열에서 35보다 큰 첫번쨰 원소" << *iter << std::endl;
	}

	return 0;
}

