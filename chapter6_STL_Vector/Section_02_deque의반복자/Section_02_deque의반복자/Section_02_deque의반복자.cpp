// Section_02_deque의반복자.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <deque>

int main()
{
	//vector 와 deque의 반복자는 임의 접근 연산자를 제공받음
	std::deque<int>* dq = new std::deque<int>;

	for (size_t idx = 0; idx < 5; ++idx)
	{
		dq->emplace_back((idx + 1) * 10);
	}

	std::deque<int>::iterator iter;

	for (iter = dq->begin(); iter != dq->end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;
	
	iter = dq->begin() + 2;
	std::cout << *iter << std::endl;

	iter += 2;
	std::cout << *iter << std::endl;

	iter -= 3;
	std::cout << *iter << std::endl;
	
	return 0;
}

