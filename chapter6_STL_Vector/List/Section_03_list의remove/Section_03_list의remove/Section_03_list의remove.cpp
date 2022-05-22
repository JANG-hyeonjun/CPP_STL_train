// Section_03_list의remove.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <list>

int main()
{
	std::list<int> lt;

	lt.emplace_back(10);
	lt.emplace_back(20);
	lt.emplace_back(30);
	lt.emplace_back(40);
	lt.emplace_back(50);
	lt.emplace_back(10);
	lt.emplace_back(10);

	std::list<int>::iterator iter;
	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;
	
	lt.remove(10); //10의 원소의 노드를 모두 제거

	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;
	//list의 remove()는 erase()처럼 해당값의 노드만 제거하므로 속도가 빠르며 유일하게 list만이
	//remove()멤버 함수를 가지며 반복자가 아닌 원소의 값으로 컨테이너 원소를 제거해야 한다면 
	//list컨테이너를 선택하는 것이 좋다. 

	return 0;
}

