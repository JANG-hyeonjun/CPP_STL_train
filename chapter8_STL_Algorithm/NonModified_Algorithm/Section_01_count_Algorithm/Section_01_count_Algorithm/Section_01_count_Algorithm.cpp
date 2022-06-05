// Section_01_count_Algorithm.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> vec;
	vec.emplace_back(10);
	vec.emplace_back(20);
	vec.emplace_back(30);
	vec.emplace_back(40);
	vec.emplace_back(30);
	vec.emplace_back(50);

	for (std::vector<int>::size_type idx = 0; idx < vec.size(); ++idx)
	{
		std::cout << vec[idx] << " ";
	}
	std::cout << std::endl;


	//구간 [vec.begin(),vec.end()) 에서 30원소 개수 반환 
	int num = std::count(vec.begin(), vec.end(), 30);
	std::cout << "30의개수: " << num << std::endl;

	return 0;
}

