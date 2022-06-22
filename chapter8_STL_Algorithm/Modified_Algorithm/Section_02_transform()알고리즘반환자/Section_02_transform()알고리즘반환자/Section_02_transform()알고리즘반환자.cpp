// Section_02_transform()알고리즘반환자.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>

int Func(int n)
{
	return n + 5;
}

int main()
{
	std::vector<int>vec1;
	for (size_t idx = 0; idx < 5; ++idx)
	{
		vec1.emplace_back((idx + 1) * 10);
	}

	std::vector<int>vec2(10, 0);
	
	std::cout << "vec1: ";
	for (size_t idx = 0; idx < vec1.size(); ++idx)
	{
		std::cout << vec1.at(idx) << " ";
	}
	std::cout << std::endl;

	std::cout << "vec2: ";
	for (size_t idx = 0; idx < vec2.size(); ++idx)
	{
		std::cout << vec2.at(idx) << " ";
	}
	std::cout << std::endl;

	std::vector<int>::iterator iter_end;
	iter_end = std::transform(vec1.begin(), vec1.end(), vec2.begin(), Func);

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


	std::cout << "[vec2.begin(),iter_end()) 순차열: " << *vec2.begin() << "..." << *(iter_end - 1) << std::endl;
	return 0;
}

