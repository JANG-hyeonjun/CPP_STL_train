// Section01_set_insert.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <set>


int main()
{
	std::set<int> s;

	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(40);
	s.insert(10);
	s.insert(70);
	s.insert(90);

	std::set<int>::iterator iter;
	for (iter = s.begin(); iter != s.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	s.insert(50); //중복된 원소(key)를 삽입한다. 실패!
	s.insert(50);

	for (iter = s.begin(); iter != s.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;


	return 0;
}

