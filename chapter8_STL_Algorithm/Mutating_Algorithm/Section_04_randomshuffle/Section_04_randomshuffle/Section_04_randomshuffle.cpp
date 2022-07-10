// Section_04_randomshuffle.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

int main()
{
	std::vector<int> vec(5);

	for (int idx = 0; idx < vec.size(); ++idx)
	{
		vec.at(idx) = (idx + 1) * 10;
	}

	std::cout << "vec: ";
	for (std::vector<int>::size_type idx = 0; idx < vec.size(); ++idx)
	{
		std::cout << vec.at(idx) << " ";

	}
	std::cout << std::endl;

	std::random_device rd;
	std::mt19937 g(rd());

	//C++ 17에서 std::rand 는 harmful하다 발표 그런데 random shuffle이 rand에 의존하기 때문에 
	//shufle을 사용하라고 CPP reference는 언급하고 있으며 무엇보다 random shufle은 global state
	//global State -> 겉보기에는 동일하지만 외부요인에 따라 다른결과를 생산해 낼수 있다,
	//그래서 URGV를 사용해서 shuffle을 사용하게 추천하는 모양
	
	std::shuffle(vec.begin(), vec.end(), g);
	std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout , " "));;
	std::cout << "\n";

	return 0;
}

