// Section_03_list_pushBack_pushFront.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
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
	std::list<int>::iterator iter;
	
	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	lt.emplace_front(100);
	lt.emplace_front(200);

	for (iter = lt.begin(); iter != lt.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;
	//list의 가장큰 특징중 하나는 원소를 삽입 제거하더라고 상수 시간 복잡도의 수행 성능 보인다느점 
	// 배열기반 컨테이너 처럼 원소를 밀어내지 않아도 노드를 서로 연결하기만 하면 되기 때문이다.

	//노드 기반 컨테이너는 반복자가 가리키는 원소 자체가 제거 되지 않는 한 반복자가 가리키는 원소는 그대로 존재
	//하지만 배열기반 컨테이너의 반복자는 원소의 삽입과 제거 동작이 발생하면 메모리가 재할당 및 
	//원소가 이동할수 있으므로 반복자가 무효화 되어짐

	
	return 0;
}

