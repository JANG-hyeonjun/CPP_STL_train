// Section_02_merge알고리즘의정렬기준greater사용예시.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>


typedef std::vector<int>::iterator ITER;

template <typename T>
class Greater
{
public:
	bool operator() (const T& left, const T& right) const
	{
		return left > right;
	}
};

int main()
{
	std::vector<int> vec1;
	vec1.emplace_back(80);
	vec1.emplace_back(60);
	vec1.emplace_back(50);
	vec1.emplace_back(30);
	vec1.emplace_back(10);

	std::vector<int>vec2;
	vec2.emplace_back(70);
	vec2.emplace_back(40);
	vec2.emplace_back(20);

	std::vector<int>vec3(10,0);
	ITER iter_end = std::merge(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), vec3.begin(),Greater<int>());

	std::cout << "vec1: ";
	for (std::vector<int>::size_type idx = 0; idx < vec1.size(); ++idx)
	{
		std::cout << vec1.at(idx)<< " ";
	}
	std::cout << std::endl;

	std::cout << "vec2: ";
	for (std::vector<int>::size_type idx = 0; idx < vec2.size(); ++idx)
	{
		std::cout << vec2.at(idx) << " ";
	}
	std::cout << std::endl;

	std::cout << "vec3: ";
	for (std::vector<int>::size_type idx = 0; idx < vec3.size(); ++idx)
	{
		std::cout << vec3.at(idx) << " ";
	}
	std::cout << std::endl;

	std::cout << "vec3 합병 순차열: " << *vec3.begin() << " ~ " << *(iter_end - 1) << std::endl;

	return 0;
}

