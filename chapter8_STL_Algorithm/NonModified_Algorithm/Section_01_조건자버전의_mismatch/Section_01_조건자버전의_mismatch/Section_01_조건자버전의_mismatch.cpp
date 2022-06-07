// Section_01_조건자버전의_mismatch.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>

bool Pred(int left, int right)
{
	return abs(right - left) <= 5;
}

int main()
{
	std::vector<int> vec1;
	for (size_t idx = 0; idx < 5; ++idx)
	{
		vec1.emplace_back((idx + 1) * 10);
	}

	std::vector<int> vec2;
	vec2.emplace_back(11);
	vec2.emplace_back(25);
	vec2.emplace_back(33);
	vec2.emplace_back(46);
	vec2.emplace_back(50);

	std::pair<std::vector<int>::iterator, std::vector<int>::iterator> iter_pair;
	iter_pair = std::mismatch(vec1.begin(), vec1.end(), vec2.begin(), Pred);

	std::cout << "vec1: " << *iter_pair.first << ", " << "vec2: " << *iter_pair.second << std::endl;

	return 0;
}

