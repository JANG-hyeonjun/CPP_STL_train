// Section_06_Binary_Search.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>



static void PrintVector(std::vector<int>&);

bool Pred(int left, int right)
{
	return 3 < right - left;
}

static void PrintVector(std::vector<int>& pVec)
{
	for (auto vecValue : pVec)
	{
		std::cout << vecValue << ", ";
	}
	std::cout << std::endl;
}

int main()
{
	std::vector<int> vec(5,0);

	for (int idx = 0; idx < vec.size(); idx++)
	{
		vec[idx] = 10 * (idx + 1);
	}
	
	if (std::binary_search(vec.begin(), vec.end(), 20))
	{
		std::cout << "20 원소가 존재합니다" << std::endl;
	}
	else
	{
		std::cout << "20 원소가 존재 하지 않습니다." << std::endl;
	}
	
	/*
	binarySearch 알고리즘은 원소를 찾기 위해 두 원소 a,b에 대해 a==b(equivalance)연산을 사용하지
	않고 !(a<b) && !(b<a) 연산을 간단하게 표현하면 a도 b보다 앞서 위치 하지 않고 b도 a보다 앞서 위치 하지 않는다.
	*/

	std::vector<int> vec2;
	
	vec2.emplace_back(40);
	vec2.emplace_back(46);
	vec2.emplace_back(12);
	vec2.emplace_back(80);
	vec2.emplace_back(10);
	vec2.emplace_back(47);
	vec2.emplace_back(30);
	vec2.emplace_back(55);
	vec2.emplace_back(90);
	vec2.emplace_back(53);

	std::sort(vec2.begin(), vec2.end(), Pred);
	PrintVector(vec2);

	if (std::binary_search(vec2.begin(), vec2.end(), 32, Pred))
	{
		std::cout << "32 원소가 존재 합니다." << std::endl;
	}
	else
	{
		std::cout << "32 원소가 존재 하지 않습니다" << std::endl;
	}

	if (std::binary_search(vec2.begin(), vec2.end(), 35, Pred))
	{
		std::cout << "35 원소가 존재 합니다." << std::endl;
	}
	else
	{
		std::cout << "35 원소가 존재 하지 않습니다" << std::endl;
	}

	return EXIT_SUCCESS;
}

