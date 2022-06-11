// Section_02_copy_backward()알고리즘.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>

//원소의 복사를 순차열의 마지막원소부터 복사하고자하면 copy_backward()알고리즘을 사용
//즉 순차열의 마지막원소부터 복사

int main()
{
	
	std::vector<int> vec1;
	for (size_t idx = 0; idx < 5; ++idx)
	{
		vec1.emplace_back((idx + 1) * 10);
	}

	std::vector<int>vec2(10,0);
	std::vector<int>::iterator iter;
	iter = std::copy_backward(vec1.begin(), vec1.end(), vec2.end());
	std::cout << "vec1: ";
	for (std::vector<int>::size_type idx = 0; idx < vec1.size(); ++idx)
	{
		std::cout << vec1.at(idx) << " ";
	}
	std::cout << std::endl;

	std::cout << "vec2: ";
	for(std::vector<int>::size_type idx = 0; idx < vec2.size(); ++idx)
	{
		std::cout << vec2.at(idx) << " ";
	}
	std::cout << std::endl;

	return 0;
}


