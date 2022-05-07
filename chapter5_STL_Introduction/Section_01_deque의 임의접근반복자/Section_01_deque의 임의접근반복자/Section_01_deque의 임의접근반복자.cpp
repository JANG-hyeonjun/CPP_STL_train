// Section_01_deque의 임의접근반복자.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <deque>


int main()
{
	std::deque<int> dq;

	dq.emplace_back(10);
	dq.emplace_back(20);
	dq.emplace_back(30);
	dq.emplace_back(40);
	dq.emplace_back(50);

	std::deque<int>::iterator iter = dq.begin();
	std::cout << iter[0] << std::endl;
	std::cout << *(iter + 1) << std::endl;
	std::cout << iter[2] << std::endl;
	std::cout << iter[3] << std::endl;
	std::cout << iter[4] << std::endl;
	std::cout << std::endl;

	iter += 2; //가리키는 반복자에서 2만큼 움직여 다시 가리킴 
	std::cout << *iter << std::endl;
	std::cout << std::endl;

	auto iter2 = iter + 2;
	std::cout << *iter2 << std::endl;
	
	return 0;
}

