// Section_03_map의찾기관련멤버함수.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <map>

int main()
{
	//map도 연관컨테이너 이므로 삽입,제거,찾기 관련 멤버 함수 제공
	//find(),lower_bound(),upper_bound(),equal_range()
	std::map<int, int> m;

	m[5] = 100;
	m[3] = 100;
	m[8] = 30;
	m[4] = 40;
	m[1] = 70;
	m[7] = 100;
	m[9] = 50;


	std::map<int, int>::iterator iter;
	for (iter = m.begin(); iter != m.end(); ++iter)
	{
		std::cout << "(" << iter->first << ", " << iter->second << ")" << " ";
	}
	std::cout << std::endl;

	iter = m.find(5);
	if (iter != m.end())
	{
		std::cout << "key 5에 매핑된 value: " << iter->second << std::endl;
	}

	std::map<int, int>::iterator lower_iter;
	std::map<int, int>::iterator upper_iter;

	lower_iter = m.lower_bound(5);
	upper_iter = m.upper_bound(5);

	std::cout << "구간 [lower_iter, upper_iter)의 순차열: ";
	for (iter = lower_iter; iter != upper_iter; ++iter)
	{
		std::cout << "(" << iter->first << ", " << iter->second << ")" << " ";
	}
	std::cout << std::endl;
	
	std::cout << "구간 [iter_pair.first, iter_pair.second)의 순차열: ";
	std::pair<std::map<int, int>::iterator, std::map<int, int>::iterator> iter_pair;
	iter_pair = m.equal_range(5);

	for (iter = iter_pair.first; iter != iter_pair.second; ++iter)
	{
		std::cout << "(" << iter->first << ", " << iter->second << ")" << " ";
	}
	std::cout << std::endl;


	return 0;
}

