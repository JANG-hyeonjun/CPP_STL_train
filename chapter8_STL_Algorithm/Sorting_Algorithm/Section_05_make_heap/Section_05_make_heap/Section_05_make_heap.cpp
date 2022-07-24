// Section_05_make_heap.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main()
{
	std::vector<int> vec;
	
	for (int idx = 0; idx < 6; ++idx)
	{
		vec.emplace_back((idx + 1) * 10);
	}

	std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout , " "));
	std::cout << std::endl;
	std::make_heap(vec.begin(), vec.end());
	std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
	
	return 0;
}

