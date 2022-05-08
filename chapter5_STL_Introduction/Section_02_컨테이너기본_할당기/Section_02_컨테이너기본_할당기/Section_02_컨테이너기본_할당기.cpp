// Section_02_컨테이너기본_할당기.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <set>


int main()
{
	//우리가 std::vector<int>를 선언하면 
	//아래와 같은일이 벌어짐 
	std::vector<int, std::allocator<int>> vec;
	vec.emplace_back(10);
	std::cout << *vec.begin() << std::endl;

	std::set<int, std::less<int>, std::allocator<int>> s;
	s.insert(10);

	std::cout << *s.begin() << std::endl;

	return 0;
}

