// Section_03_list의조건자버전_unique().cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <list>

bool Predicate(int first, int second)
{
	return second - first <= 0;
}

int main()
{
	std::list<int> lt;

	lt.emplace_back(10);
	lt.emplace_back(10);
	lt.emplace_back(20);
	lt.emplace_back(30);
	lt.emplace_back(30);
	lt.emplace_back(30);
	lt.emplace_back(40);
	lt.emplace_back(50);
	lt.emplace_back(10);
	
	std::list<int>::iterator iter;
	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	lt.unique(Predicate);
	//이항조건자가 참이면 해당 원소를 제거 
	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	return 0;
}

