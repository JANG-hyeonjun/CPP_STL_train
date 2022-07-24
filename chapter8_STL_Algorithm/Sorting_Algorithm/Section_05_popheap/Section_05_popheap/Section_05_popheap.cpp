// Section_05_popheap.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> vec;

	for (int idx = 0; idx < 6; ++idx)
	{
		vec.emplace_back((idx + 1) * 10);
	}

	std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	std::make_heap(vec.begin(), vec.end());

	std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	//push_heap 알고리즘은 구간 [b,e)의 원소를 추가하는 알고리즘 이다. 일반적으로 멤버함수 
	//push_back ,emplace_back등과 함께 쓰임

	//힙 추가
	//vec.emplace_back(35);
	//std::push_heap(vec.begin(), vec.end());
	
	//힙 삭제
	std::pop_heap(vec.begin(), vec.end());
	vec.pop_back();
	//이렇게 같이 써야 한다.

	

	std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	std::sort_heap(vec.begin(), vec.end());
	std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;


	return 0;
}

