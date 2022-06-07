// Section_01_mismatch()알고리즘.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <algorithm>
#include <vector>


int main()
{	
	std::vector<int> vec1;
	for (size_t idx = 0; idx < 5; ++idx)
	{
		vec1.emplace_back((idx + 1) * 10);
	}

	std::vector<int> vec2;
	vec2.emplace_back(10);
	vec2.emplace_back(20);
	vec2.emplace_back(30);
	vec2.emplace_back(80);
	vec2.emplace_back(90);

	//두 순차열을 비교하여 원소의 값이 서로 다은 위치를 찾고자 한다면 mismatch() 알고리즘을 사용
	std::pair<std::vector<int>::iterator, std::vector<int>::iterator> iter_pair;
	iter_pair = std::mismatch(vec1.begin(), vec1.end(), vec2.begin());

	std::cout << "v1: " << *iter_pair.first << ", " << "v2: " << *iter_pair.second << std::endl;

	return 0;
}

