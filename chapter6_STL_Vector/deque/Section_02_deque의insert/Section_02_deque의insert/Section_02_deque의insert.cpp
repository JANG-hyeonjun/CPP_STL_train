// Section_02_deque의insert.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <deque>

int main()
{
	
	std::deque<int> dq;

	for (size_t idx = 0; idx < 10; ++idx)
	{
		dq.emplace_back((idx + 1) * 10);
	}

	std::deque<int>::iterator iter;
	std::deque<int>::iterator iter2;

	for (iter = dq.begin(); iter != dq.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	iter = dq.begin() + 2;
	iter2 = dq.insert(iter, 500);
	//vector와 동일하게 반복자가 가리키는 위치에 원소를 삽입하고 해당 반복자를 반환  
	//deque는 vector와 다르게 원소의 개수가 적은쪽으로 밀어낸다,

	std::cout << *iter2 << std::endl;

	for (iter = dq.begin(); iter != dq.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	return 0;
}

