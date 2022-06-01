// Section_02_multiset의insert.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <set>

int main()
{
	std::multiset<int> ms;
	std::multiset<int>::iterator iter;

	ms.insert(50);
	ms.insert(30);
	ms.insert(80);
	ms.insert(80);
	ms.insert(30);
	ms.insert(70);

	iter = ms.insert(10);

	//multiset의 insert()는 key가 중복 저장될수 있기 때문에  set처럼 저장위치와 삽입 성공 여부
	//bool값을 반환하는 pair객체가 아닌 저장된 위치만을 가리키는 반복자를 반환한다.

	std::cout << "iter의 원소: " << *iter << std::endl;
	for (iter = ms.begin(); iter != ms.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	return 0;
}

