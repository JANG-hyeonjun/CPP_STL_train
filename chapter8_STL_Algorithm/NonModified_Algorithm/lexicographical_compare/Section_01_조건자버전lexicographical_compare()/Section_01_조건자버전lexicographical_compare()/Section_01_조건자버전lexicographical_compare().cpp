// Section_01_조건자버전lexicographical_compare().cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
class Less
{
public:
	bool operator() (const T& left, const T& right) const
	{
		return left < right;
	}
};

int main()
{
	std::vector<int> vec1;
	for (size_t idx = 0; idx < 3; ++idx)
	{ 
		vec1.emplace_back((idx + 1) * 10);
	}

	std::vector<int> vec2;
	vec2.emplace_back(10);
	vec2.emplace_back(25);
	vec2.emplace_back(30);

	if (std::lexicographical_compare(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), std::less<int>()))
	{
		std::cout << "기존 less vec1 과 vec2의 비교: true" << std::endl;
	}
	else
	{
		std::cout << "사용자 기준 Less vec1 과 vec2의 비교: false" << std::endl;
	}

	if (std::lexicographical_compare(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), std::greater<int>()))
	{
		std::cout <<"기존 greater vec1 과 vec2의 비교 : true" << std::endl;
	}
	else
	{
		std::cout << "기존 greater vec1 과 vec2의 비교: false" << std::endl;
	}

	if(std::lexicographical_compare(vec1.begin(),vec1.end(),vec2.begin(),vec2.end(),Less<int>()))
	{
		std::cout << "사용자 기준 Less vec1 과 vec2의 비교: true" << std::endl;
	}
	else
	{
		std::cout << "사용자 기준 Less vec1 과 vec2의 비교: false" << std::endl;
	}

	return 0;
}

