// Section_02_merge_Algorithm.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> vec1;
	vec1.emplace_back(10);
	vec1.emplace_back(30);
	vec1.emplace_back(50);
	vec1.emplace_back(60);
	vec1.emplace_back(80);

	std::vector<int> vec2;
	vec2.emplace_back(20);
	vec2.emplace_back(40);
	vec2.emplace_back(70);

	std::vector<int>vec3(10,0);
	std::vector<int>::iterator iter_end = std::merge(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), vec3.begin());

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

	for (std::vector<int>::size_type idx = 0; idx < vec3.size(); ++idx)
	{
		std::cout << vec3.at(idx) << " ";
	}
	std::cout << std::endl;

	std::cout << "vec3(합병 순차열): " << *vec3.begin() << " ~ " << *(iter_end - 1) << std::endl;
	//만약 합병하려는 두 순차열이 특정 정렬 기준에 의해 정렬된 상태라면 일반버전의 merge()알고리즘을 사용할수 없다
	//merge는 기본적으로 오름차순 정렬기준 less:<를 전제로 동작하기 때문
	//이런경우 조건자 버전 merge알고리즘을 사용

	return 0;
}


