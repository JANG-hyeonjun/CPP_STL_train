// Section_02_swap()_iter_swap().cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int a = 10, b = 20;

	std::vector<int> vec;
	vec.emplace_back(10);
	vec.emplace_back(20);
	
	std::cout << "a= " << a << ", " << "b= " << b << std::endl;
	std::swap(a, b);
	std::cout << "a= " << a << ", " << "b= " << b << std::endl;

	std::vector<int>::iterator p = vec.begin();
	std::vector<int>::iterator q = vec.begin() + 1;

	std::cout << "vec[0]= " << vec[0] << ", " << "vec[1]= " << vec[1] << std::endl;
	std::iter_swap(p, q);
	std::cout << "vec[0]= " << vec[0] << ", " << "vec[1]= " << vec[1] << std::endl;


	return 0;
}

