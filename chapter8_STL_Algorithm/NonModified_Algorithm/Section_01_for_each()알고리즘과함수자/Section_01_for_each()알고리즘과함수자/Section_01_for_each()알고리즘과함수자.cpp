// Section_01_for_each()알고리즘과함수자.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>

class PrintFunctor
{
private:
	char fmt;
public:
	explicit PrintFunctor(char c = ' '):fmt(c){}
	void operator() (int n) const
	{
		std::cout << n << fmt;
	}
};

int main()
{
	std::vector<int> vec;
	for (size_t idx = 0; idx < 5; ++idx)
	{
		vec.emplace_back((idx + 1) * 10);
	}

	std::for_each(vec.begin(), vec.end(), PrintFunctor());
	std::cout << std::endl;
	std::for_each(vec.begin(), vec.end(), PrintFunctor(','));
	std::cout << std::endl;
	std::for_each(vec.begin(), vec.end(), PrintFunctor('\n'));
	std::cout << std::endl;

	return 0;
}

