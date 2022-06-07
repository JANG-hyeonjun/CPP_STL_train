// Section_01_Search().cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
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

	std::vector<int>::iterator iter;
	iter = std::search(vec1.begin(), vec1.end(), vec2.begin(),vec2.end());

	if (iter != vec1.end())
	{
		std::cout << "iter : " << *iter << std::endl;
		std::cout << "iter-1 : " << *(iter - 1) << std::endl;
		std::cout << "iter+1 : " << *(iter + 1) << std::endl;
	}

	return 0;
}

