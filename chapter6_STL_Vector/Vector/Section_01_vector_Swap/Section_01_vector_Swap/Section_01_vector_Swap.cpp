// Section_01_vector_Swap.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v1;
	v1.emplace_back(10);
	v1.emplace_back(20);
	v1.emplace_back(30);
	
	std::vector<int> v2;
	v2.emplace_back(100);
	v2.emplace_back(200);
	v2.emplace_back(300);
	
	for (std::vector<int>::size_type idx = 0; idx < v1.size(); ++idx)
	{
		std::cout << v1[idx] << ", " << v2[idx] << std::endl;
	}
	std::cout << std::endl;

	v1.swap(v2);

	for (std::vector<int>::size_type idx = 0; idx < v1.size(); ++idx)
	{
		std::cout << v1[idx] << ", " << v2[idx] << std::endl;
	}
	std::cout << std::endl;

	return 0;
}

