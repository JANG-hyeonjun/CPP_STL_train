// Section_02_fill()_fill_n().cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> vec;
	for (size_t idx = 0; idx < 5; ++idx)
	{
		vec.emplace_back((idx + 1) * 10);
	}
	//fill(b,e,x) 알고리즘은 구간 [b,e)의 원소를 x로 채우며 fill_n(b,n,x)알고리즘은 구간 [b,b+n)의 
	//원소를 x로 채웁니다.

	std::fill(vec.begin(), vec.end(), 0);
	std::cout << "vec: ";
	for (std::vector<int>::size_type idx = 0; idx < vec.size(); ++idx)
	{
		std::cout << vec.at(idx) << " ";
	}
	std::cout << std::endl;
	//모든 구간의 원소를 0으로 채움

	std::fill_n(vec.begin(), 3, 55);
	std::cout << "vec: ";
	for (std::vector<int>::size_type idx = 0; idx < vec.size(); ++idx)
	{
		std::cout << vec.at(idx) << " ";
	}
	std::cout << std::endl;
	//구간 [vec.begin(),v.begin() + 3)의 구간의 모든 원소를 55로 채움

	return 0;
}

