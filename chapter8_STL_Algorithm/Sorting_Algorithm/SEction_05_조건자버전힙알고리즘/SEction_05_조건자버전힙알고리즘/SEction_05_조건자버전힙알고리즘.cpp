// SEction_05_조건자버전힙알고리즘.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	
	std::vector<int>vec;

	vec.emplace_back(40);
	vec.emplace_back(10);
	vec.emplace_back(50);
	vec.emplace_back(30);
	vec.emplace_back(20);
	vec.emplace_back(60);

	std::make_heap(vec.begin(), vec.end(), std::greater<int>());
	//최소힙 (default는 최대힙)
	std::cout << "vec[힙 생성] : ";
	for (std::vector<int>::size_type idx = 0; idx < vec.size(); ++idx)
	{
		std::cout << vec[idx] << " ";
	}
	std::cout << std::endl;

	vec.emplace_back(35);

	std::push_heap(vec.begin(), vec.end(), std::greater<int>());
	std::cout << "vec[힙 추가] : ";
	for (std::vector<int>::size_type idx = 0; idx < vec.size(); ++idx)
	{
		std::cout << vec[idx] << " ";
	}
	std::cout << std::endl;
	
	std::sort_heap(vec.begin(), vec.end(), std::greater<int>());
	std::cout << "vec[힙 정렬] : ";
	for (std::vector<int>::size_type idx = 0; idx < vec.size(); ++idx)
	{
		std::cout << vec[idx] << " ";
	}
	std::cout << std::endl;

	return EXIT_SUCCESS;
}

