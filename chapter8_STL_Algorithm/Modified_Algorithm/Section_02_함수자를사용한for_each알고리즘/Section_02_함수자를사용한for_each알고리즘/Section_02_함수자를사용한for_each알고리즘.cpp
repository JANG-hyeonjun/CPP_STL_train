// Section_02_함수자를사용한for_each알고리즘.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>
class Accmulation
{
private:
	int total;
public:
	explicit Accmulation(int init = 0):total(init) { }
	void operator() (int &r)
	{
		total += r;
		r = total;
	}
};
//해당 방식은 순차열의 원소를 포인터나 참조자로 받는데에서 원소를 수정 출력이 가능하다
//하지만 generate 와 generate_n()함수자의 매개변수로 순차열의 원소를 전달 받지 않아서 단순하게 값을 채울뿐이다.

int main()
{
	std::vector<int> vec;

	for (size_t idx = 0; idx < 5; ++idx)
	{
		vec.emplace_back(idx + 1);
	}

	std::cout << "vec: ";
	for (std::vector<int>::size_type idx = 0; idx < vec.size(); ++idx)
	{
		std::cout << vec.at(idx) << " ";
	}
	std::cout << std::endl;

	std::for_each(vec.begin(), vec.end(), Accmulation(0));

	std::cout << "vec: ";
	for (std::vector<int>::size_type idx = 0; idx < vec.size(); ++idx)
	{
		std::cout << vec.at(idx) << " ";
	}
	std::cout << std::endl;

	return EXIT_SUCCESS;
}

