// Section_01_equal()알고리즘.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
	//equal()알고리즘을 사용하여 두 순차열의 원소가 모두 같은 비교할수 있다.
	//equal[b,e,b2)는 구간 [b,e)의 순차열과 구간 [b2,b2 + (e - b))의 순차열이 같은지 판단
	
	std::vector<int> vec1;
	vec1.emplace_back(10);
	vec1.emplace_back(20);
	vec1.emplace_back(30);

	std::vector<int>vec2;
	vec2.emplace_back(10);
	vec2.emplace_back(20);
	vec2.emplace_back(30);
	vec2.emplace_back(40);
	vec2.emplace_back(50);

	std::cout << "Vec1: ";
	for (std::vector<int>::size_type idx = 0; idx < vec1.size(); ++idx)
	{
		std::cout << vec1[idx] << " ";
	}
	std::cout << std::endl;

	std::cout << "Vec2: ";
	for (std::vector<int>::size_type idx = 0; idx < vec2.size(); ++idx)
	{
		std::cout << vec2[idx] << " ";
	}
	std::cout << std::endl;

	if (std::equal(vec1.begin(), vec1.end(), vec2.begin()))
	{
		std::cout << "두 순차열은 같습니다. " << std::endl;
	}
	
	return 0;
}

