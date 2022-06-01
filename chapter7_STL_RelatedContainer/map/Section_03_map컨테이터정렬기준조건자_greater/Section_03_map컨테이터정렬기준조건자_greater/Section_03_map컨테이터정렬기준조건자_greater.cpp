// Section_03_map컨테이터정렬기준조건자_greater.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <map>
#include <array>
#include <vector>
#include <string>

int main()
{
	std::map<int, std::string, std::greater<int >> m;
	
	m[5] = "five";
	m[3] = "three";
	m[8] = "eight";
	m[4] = "four";
	m[1] = "one";
	m[7] = "seven";
	m[9] = "nine";

	std::map<int, std::string, std::greater<int>>::iterator iter;
	for (iter = m.begin(); iter != m.end(); ++iter)
	{
		std::cout << "(" << iter->first << ", " << iter->second << ")" << " ";
	}
	std::cout << std::endl;

	std::vector<int> map_key;
	
	for (auto& key : m)
	{
		map_key.emplace_back(key.first);
	}

	for (size_t idx = 0; idx < map_key.size(); ++idx)
	{
		std::cout << m[map_key[idx]] << " ";
	}
	std::cout << std::endl;
	
	return 0;
}

