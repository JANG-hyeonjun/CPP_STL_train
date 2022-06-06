// Section_01_find_end()알고리즘.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> vec1;
	vec1.emplace_back(10);
	vec1.emplace_back(20);
	vec1.emplace_back(30);
	vec1.emplace_back(40);
	vec1.emplace_back(50);
	vec1.emplace_back(60);
	vec1.emplace_back(70);
	vec1.emplace_back(30);
	vec1.emplace_back(40);
	vec1.emplace_back(50);

	std::vector<int> vec2;
	vec2.emplace_back(30);
	vec2.emplace_back(40);
	vec2.emplace_back(50);


	//순차열 하나에 포함하는 다른 순차열이 있는지 찾아야만 한다면 find_end(),search()를 이용
	//하지만 둘의 차이는 find_end()는 일치하는 순차열이 여러개라면 마지막 순차열의 반복자를 반환하며
	//search()는 첫번째 순차열의 반복자를 반환합니다.

	std::vector<int>::iterator iter;
	iter = std::find_end(vec1.begin(), vec1.end(), vec2.begin(), vec2.end());
	if (iter != vec1.end())
	{
		std::cout << "iter: " << *iter << std::endl;
		std::cout << "iter - 1: " << *(iter - 1) << std::endl;
		std::cout << "iter + 1: " << *(iter + 1) << std::endl;
	}
	
	return 0;
}

