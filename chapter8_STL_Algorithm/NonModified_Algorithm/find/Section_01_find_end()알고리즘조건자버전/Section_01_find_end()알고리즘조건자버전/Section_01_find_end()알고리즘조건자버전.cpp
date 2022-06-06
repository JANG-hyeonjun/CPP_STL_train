// Section_01_find_end()알고리즘조건자버전.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <array>

bool Pred(int left, int right)
{
	return left <= right;
}


class PrintFunctor
{
private:
	char fmt;
public:
	explicit PrintFunctor(char c = ' ') : fmt(c) { }
	void operator() (int n) const
	{
		std::cout << n << fmt;
	}
};

int main()
{
	std::vector<int> vec1;
	vec1.emplace_back(10);
	vec1.emplace_back(15);
	vec1.emplace_back(20);
	vec1.emplace_back(40);
	vec1.emplace_back(50);
	vec1.emplace_back(60);
	vec1.emplace_back(10);
	vec1.emplace_back(11);
	vec1.emplace_back(12);
	vec1.emplace_back(80);

	std::vector<int> vec2;
	vec2.emplace_back(10);
	vec2.emplace_back(15);
	vec2.emplace_back(25);


	//순차열 하나에 포함하는 다른 순차열이 있는지 찾아야만 한다면 find_end(),search()를 이용
	//하지만 둘의 차이는 find_end()는 일치하는 순차열이 여러개라면 마지막 순차열의 반복자를 반환하며
	//search()는 첫번째 순차열의 반복자를 반환합니다.

	std::vector<int>::iterator iter;
	iter = std::find_end(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), Pred);
	if (iter != vec1.end())
	{
		std::cout << "iter: " << *iter << std::endl;
		std::cout << "iter - 1: " << *(iter - 1) << std::endl;
		std::cout << "iter + 1: " << *(iter + 1) << std::endl;
	}

	std::array<int, 5> arr = { 1,2,3,4,5 };
	std::for_each(arr.begin(),arr.end() , PrintFunctor(','));
	//이부분이 지금과 같이 클라이언트에서 호출 되면 
	//서버단 코드는 아래와 같이 동작 
	/*
	Func for_each(Iterator first,Iterator last,Func fun)
	{
		for(Iterator p = first; p != last; ++p)
		{
			fun(*p) // -> fun.operator() (*p) 를 호출 임시객체는 R-value로 없어졌지만 호출된 fun은 해당 
			//format fmt를 기억 따라거 부가적인 정보를 같이 출력가능 및 상태변수 저장 가능
		}
	}
	*/
	
	return 0;
}
