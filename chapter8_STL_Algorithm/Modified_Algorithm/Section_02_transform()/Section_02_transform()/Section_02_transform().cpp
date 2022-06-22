// Section_02_transform().cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>


int Func(int n)
{
	return n + 5;
}

int main()
{
	std::vector<int> vec;
	for (size_t idx = 0; idx < 5; ++idx)
	{
		vec.emplace_back((idx + 1) * 10);
	}

	std::cout << "vec:";
	for (std::vector<int>::iterator iter = vec.begin(); iter != vec.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	std::transform(vec.begin(), vec.end(), vec.begin(), Func);

	std::cout << "vec:";
	for (std::vector<int>::iterator iter = vec.begin(); iter != vec.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	return 0;
}

