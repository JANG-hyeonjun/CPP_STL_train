// Section_03_PairClass.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>

template<typename T1,typename T2>
class Pair
{	
public:
	T1 first;
	T2 second;
	Pair(const T1& ft, const T2& sd): first(ft),second(sd)
	{}
};

int main()
{
	Pair<int, int> p1(10, 20);
	std::cout << p1.first << ", " << p1.second << std::endl;
	Pair<int, std::string> p2(1, "one");
	std::cout << p2.first << ", " << p2.second << std::endl;
	std::cout << std::endl;
	
	///////STL의 pair/////
	std::pair<int, int> p3(10, 20);
	std::cout << p3.first << ", " << p3.second << std::endl;
	std::pair<int, std::string> p4(1, "one");
	std::cout << p4.first << ", " << p4.second << std::endl;

	return 0;
}

