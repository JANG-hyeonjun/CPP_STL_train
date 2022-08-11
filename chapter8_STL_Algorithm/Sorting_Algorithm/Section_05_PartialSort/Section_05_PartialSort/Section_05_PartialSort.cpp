// Section_05_PartialSort.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

//Partial_sort_copy(b,e,b2,e2)알고리즘은 구간[b,e)의 원소 중 e2-b2개의 상위 원소를 정렬하여 
//[b2,e2)의 순차열로 복사를 진행 

int main()
{
	std::vector<int> vec1;

	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(0,1000);

	for (int idx = 0; idx < 100; ++idx)
	{
		vec1.emplace_back(dis(gen));
	}
	
	std::cout << "[vec1 정렬 전]: ";
	for (std::vector<int>::size_type idx = 0; idx < vec1.size(); ++idx)
	{
		std::cout << vec1[idx] << " ";
	}
	std::cout << std::endl;

	std::vector<int>vec2(20);

	std::partial_sort_copy(vec1.begin(), vec1.end(), vec2.begin(), vec2.end());
	std::cout << "[vec2 less]: ";
	for (std::vector<int>::size_type idx = 0; idx < vec2.size(); ++idx)
	{
		std::cout << vec2[idx] << " ";
	}
	std::cout << std::endl;

	std::partial_sort_copy(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), std::greater<int>());
	std::cout << "[vec2 greater]: ";
	for (std::vector<int>::size_type idx = 0; idx < vec2.size(); ++idx)
	{
		std::cout << vec2[idx] << " ";
	}
	std::cout << std::endl;

	return EXIT_SUCCESS;
}

