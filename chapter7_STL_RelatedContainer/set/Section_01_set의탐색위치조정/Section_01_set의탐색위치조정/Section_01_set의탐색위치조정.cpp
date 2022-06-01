// Section_01_set의탐색위치조정.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <set>

int main()
{
	//연관 컨테이너 시퀀스 컨테이너 처럼 삽입할 위치 (반복자)를 지정하는 버전과 삽입할 구간의 
	//반복자 쌍을 지정하는 버전의 insert도 제공 
	std::set<int> s;
	std::pair<std::set<int>::iterator, bool> pr;

	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(40);
	s.insert(10);
	s.insert(70);
	pr = s.insert(90); //pr.first는 90원소의 반복자

	std::set<int>::iterator iter;
	for (iter = s.begin(); iter != s.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;
	s.insert(pr.first, 85); //90 원소의 반복자에서 검색 시작후 삽입

	for (iter = s.begin(); iter != s.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	
	std::cout << std::endl;
	return 0;
}

