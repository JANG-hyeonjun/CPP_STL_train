// Section_01_insert()의반환값.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <set>


int main()
{
	std::set<int> s;
	std::pair<std::set<int>::iterator, bool> pr;

	pr = s.insert(50);
	s.insert(40);
	s.insert(80);

	//set은 같은 원소(key)를 중복 저장할수 없으므로 insert()멤버 함수호출시 반환값으로 
	//실패를 확인할 수 있습니다.
	if (true == pr.second)
		std::cout << *pr.first << "삽입 성공!" << std::endl;
	else
		std::cout << *pr.first << "가 이미 있습니다. 삽입 실패!" << std::endl;

	std::set<int>::iterator iter;
	for (iter = s.begin(); iter != s.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	pr = s.insert(50);

	if (true == pr.second)
		std::cout << *pr.first << "삽입 성공!" << std::endl;
	else
		std::cout << *pr.first << "가 이미 있습니다. 삽입 실패!" << std::endl;

	for (iter = s.begin(); iter != s.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	return 0;
}

