// Section_03_reverse_unique.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <list>

int main()
{
	std::list<int> lt;

	for (size_t idx = 0; idx < 5; ++idx)
	{
		lt.emplace_back((idx + 1) * 10);
	}

	for (std::list<int>::iterator iter = lt.begin(); iter != lt.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	lt.reverse();
	//reverse()는 이중 연결 리스트의 탐색 경로를 서로 바꿈으로써 순차열을 리버스 시킴
	for (std::list<int>::iterator iter = lt.begin(); iter != lt.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	//원소를 중복되지 않게 하나씩만 남기고 싶다면 unique() 멤버 함수를 사용 
	//주의할점은 unique()멤버 함수는 인접한 원소를 하나만 남김으로 연속하지 않은 원소는 중복될수 있다.
	
	std::list<int> lt2;

	lt2.emplace_back(10);
	lt2.emplace_back(10);
	lt2.emplace_back(20);
	lt2.emplace_back(30);
	lt2.emplace_back(30);
	lt2.emplace_back(30);
	lt2.emplace_back(40);
	lt2.emplace_back(50);
	lt2.emplace_back(10);

	for (std::list<int>::iterator iter = lt2.begin(); iter != lt2.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	lt2.unique();
	
	for (std::list<int>::iterator iter = lt2.begin(); iter != lt2.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	return 0;
}

