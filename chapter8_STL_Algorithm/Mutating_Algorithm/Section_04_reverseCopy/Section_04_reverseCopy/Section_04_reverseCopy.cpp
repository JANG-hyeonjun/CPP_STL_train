// Section_04_reverseCopy.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main()
{	
	std::vector<int> vec1(5);

	for (std::vector<int>::size_type idx = 0; idx < vec1.size(); ++idx)
	{
		vec1.at(idx) = (idx + 1) * 10;
	}

	std::cout << "vec1: ";
	std::copy(vec1.begin(), vec1.end(), std::ostream_iterator<int>(std::cout, " "));
	std::cout << "\n";

	//단순히 5를 할당하는게 아니라 vec1과 같은사이즈를 주고싶었다 라는 의도로 
	std::vector<int> vec2(vec1.size());
	
	std::vector<int>::iterator iter_end;
	iter_end = std::reverse_copy(vec1.begin(), vec1.end(), vec2.begin());

	std::cout << "vec2: ";
	std::copy(vec2.begin(), iter_end, std::ostream_iterator<int>(std::cout, " "));
	std::cout << "\n";

	return 0;
}

