// Section_04_rotate_rotateCopy.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main()
{
	std::vector<int> vec(5);
	for (int idx = 0; idx < vec.size(); ++idx)
	{
		vec.at(idx) = (idx + 1) * 10;
	}
	//std::copy(std::istream_iterator<int>(std::cin), std::istream_iterator<int>(), vec.begin());
	
	std::cout << "vec: ";
	std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	std::vector<int>::iterator middle = vec.begin() + 2;
	//std::rotate(vec.begin(), middle, vec.end());
	//왼쪽에서 m-e만큼씩 회전한다,

	/*
	std::cout << "vec: ";
	std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;
	*/

	std::vector<int>vec2(vec.size());
	std::vector<int>::iterator iter_end = std::rotate_copy(vec.begin(), middle, vec.end(), vec2.begin());
	std::cout << "vec2: ";
	std::copy(vec2.begin(), iter_end, std::ostream_iterator<int>(std::cout, " "));
	std::cout << std::endl;

	return 0;
}

