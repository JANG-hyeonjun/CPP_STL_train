// Remove_copy알고리즘.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>
//순차열의 원본을 변경하지 않고 특정원소를 제거하여 목적지 순차열로 복사하고자 한다면
//remove_copy()알고리즘을 사용한다.

int main()
{
	std::vector<int> vec1;
	for (size_t idx = 0; idx < 5; ++idx)
	{
		vec1.emplace_back((idx + 1) * 10);
	}

	std::vector<int>vec2(5,0);
	std::vector<int>::iterator iter_end = std::remove_copy(vec1.begin(), vec1.end(), vec2.begin(), 30);

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


	std::cout << "[vec2.begin(), iter_end) : ";
	for (std::vector<int>::iterator iter = vec2.begin(); iter != iter_end; ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;
	return 0;
}

