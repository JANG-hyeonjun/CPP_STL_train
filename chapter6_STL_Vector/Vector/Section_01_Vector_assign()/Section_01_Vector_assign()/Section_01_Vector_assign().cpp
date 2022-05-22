// Section_01_Vector_assign().cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v(5, 1);
	for (std::vector<int>::size_type idx = 0; idx < v.size(); ++idx)
	{
		std::cout << v[idx] << " ";
	}
	std::cout << std::endl;

	v.assign(5, 2);

	for (std::vector<int>::size_type idx = 0; idx < v.size(); ++idx)
	{
		std::cout << v[idx] << " ";
	}
	std::cout << std::endl;

	return 0;
}

