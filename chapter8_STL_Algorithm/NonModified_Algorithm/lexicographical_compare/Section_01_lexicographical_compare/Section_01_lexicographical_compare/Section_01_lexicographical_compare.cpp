// Section_01_lexicographical_compare.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
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

	std::vector<int> vec2;
	vec2.emplace_back(10);
	vec2.emplace_back(20);
	vec2.emplace_back(50);

	std::vector<int> vec3;
	vec3.emplace_back(10);
	vec3.emplace_back(20);
	vec3.emplace_back(30);

	if (std::lexicographical_compare(vec1.begin(), vec1.end(), vec2.begin(), vec2.end()))
	{
		std::cout << "v1 < v2" << std::endl;
	}
	else
	{
		std::cout << "v1 >= v2" << std::endl;
	}


	if (std::lexicographical_compare(vec1.begin(), vec1.end(), vec3.begin(), vec3.end()))
	{
		std::cout << "v1 < v3" << std::endl;
	}
	else
	{
		std::cout << "v1 >= v3" << std::endl;
	}

	return 0;
}

