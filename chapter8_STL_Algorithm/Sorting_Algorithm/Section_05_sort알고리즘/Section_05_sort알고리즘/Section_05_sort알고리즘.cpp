// Section_05_sort알고리즘.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

bool Greater(int left, int right)
{
	return left > right;
}

int main()
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(0, 1000);

	std::vector<int> vec;

	for (int idx  =  0; idx < 100; ++idx)
	{
		vec.emplace_back(dis(gen));
	}

	std::cout << "vec[정렬 전] : ";
	for (std::vector<int>::size_type idx = 0; idx < vec.size(); ++idx)
	{
		std::cout << vec[idx] << " ";
	}
	std::cout << std::endl;

	std::sort(vec.begin(), vec.end());

	std::cout << "vec[정렬 less] : ";
	for (std::vector<int>::size_type idx = 0; idx < vec.size(); ++idx)
	{
		std::cout << vec[idx] << " ";
	}
	std::cout << std::endl;
	
	std::sort(vec.begin(), vec.end(), Greater);

	std::cout << "vec[정렬 Greater] : ";
	for (std::vector<int>::size_type idx = 0; idx < vec.size(); ++idx)
	{
		std::cout << vec[idx] << " ";
	}
	std::cout << std::endl;



	return EXIT_SUCCESS;
}

//순차열로 원소를 정렬하려면 sort(), stable_sort(),partial_sort()를 사용
//sort알고리즘은 퀵정렬 기반 stable_sort알고리즘은 머지정렬 기반 partial_sort 알고리즘은 힙정렬기반.

//sort의 알고리즘은 평균 O(NlogN)의 복잡도를 보장하며 최악의 N^2의 시간을 가지게 된다.
//stable_sort의 알고리즘은 메모리만 넉넉하다면 O(NlogN)의 복잡도를 보장하며 메모리가 넉넉하지 않다면
//O(NlogNlogN)의 시간복잡도를 가지게 된다.

//partial_sort()알고리즘은 힙정렬을 기반으로하므로 언제든지 O(NlogN)의 복잡도를 보장한다.
//하지만 일반적으로 퀵정렬보다는 성능이 떨어진다. -> 매번 다운힙을 실행해야 하기 떄문이다.

