// Section_05_nth_Element().cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <random>

int main()
{
	std::vector<int> vec;

	//시드값을 얻기 위한 random_device 생성
	std::random_device rd;

	//random_device를 통해 난수 생성 엔진을 초기화 한다.
	std::mt19937 gen(rd());

	//0 ~ 1000 까지 균등하게 나타나는 난수열을 생성하기 위해 균등 분포 정의
	std::uniform_int_distribution<int> dis(0, 1000);

	for (int i = 0; i < 100; ++i)
	{
		vec.emplace_back(dis(gen));
	}

	///순차열의 원소중에 n가의 원소를 선별하고자 한다면 nth_element()알고리즘을 사용한다.
	std::nth_element(vec.begin(), vec.begin() + 20, vec.end());

	std::cout << "vec[상위 20개] : ";
	for (std::vector<int>::size_type idx = 0; idx < 20; idx++)
	{
		std::cout << vec[idx] << " ";
	}
	std::cout << std::endl;

	std::cout << "vec[하위 80개] : ";
	for (std::vector<int>::size_type idx = 20; idx < vec.size(); ++idx)
	{
		std::cout << vec[idx] << " ";
	}
	std::cout << std::endl;


	return EXIT_SUCCESS;
}

