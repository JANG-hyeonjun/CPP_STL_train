// Section_01_set_lowerbound_upperbound.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <set>

int main()
{
	//set의 멤버함수 lower_bound()와 upper_bound()는 찾은 key를 순차열 구간으로
	//반환 하는 멤버함수 이다. lower_bound()는 찾은 원소의 시작 반복자를 반환하며 
	//upper_bound()는 찾은 원소의 다음을 가리키는 반복자이다. 
	//그래서 lower_bound 와 upper_bound가 같다면 찾는 원소가 없다는 것이다.
	
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

	std::set<int>::iterator iter_lower;
	std::set<int>::iterator iter_Upper;

	iter_lower = s.lower_bound(30);
	iter_Upper = s.upper_bound(30);

	std::cout << *iter_lower <<std::endl;
	std::cout << *iter_Upper << std::endl;

	iter_lower = s.lower_bound(55);
	iter_Upper = s.upper_bound(55);
	
	std::cout << *iter_lower << std::endl;
	std::cout << *iter_Upper << std::endl;



	if (iter_lower != iter_Upper)
	{
		std::cout << "55가 s에 있음!" << std::endl;
	}
	else
	{
		std::cout << "55가 s에 없음!" << std::endl;
	}

	//equal_range()는 lower_bound()와 upper_bound()의 반복자쌍을 pair객체로 반환 합니다.
	
	std::pair<std::set<int>::iterator, std::set<int>::iterator> iter_pair;
	iter_pair = s.equal_range(30);

	std::cout << *iter_pair.first << std::endl;
	std::cout << *iter_pair.second << std::endl;

	iter_pair = s.equal_range(55);
	if (iter_pair.first != iter_pair.second)
	{
		std::cout << "55가 s에 있음!" << std::endl;
	}
	else
	{
		std::cout << "55가 s에 없음!" << std::endl;
	}



	return 0;
}

