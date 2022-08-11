// Section_05_partial_sort().cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

int main()
{
	std::vector<int> vec(100,0);

	std::random_device rd;

	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(0,1000);

	for (std::vector<int>::size_type idx = 0; idx < vec.size(); ++idx)
	{
		vec[idx] = dis(gen);
	}

	std::partial_sort(vec.begin(), vec.begin() + 20, vec.end());

	std::cout << "vec[상위 정렬 20개] : ";
	for (std::vector<int>::size_type idx = 0; idx < 20; ++idx)
	{
		std::cout << vec[idx] << " ";
	}
	std::cout << std::endl;

	std::cout << "vec[하위 정렬 80개]: ";
	for (std::vector<int>::size_type idx = 20; idx < vec.size(); ++idx)
	{
		std::cout << vec[idx] << " ";
	}
	std::cout << std::endl;

	return EXIT_SUCCESS;
}

