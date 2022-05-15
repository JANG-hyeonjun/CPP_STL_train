// Section_01_Vector의생성자.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vec1(5);
	vec1.emplace_back(10);
	vec1.emplace_back(20);
	vec1.emplace_back(30);
	vec1.emplace_back(40);
	vec1.emplace_back(50);

	for (std::vector<int>::size_type idx = 0; idx < vec1.size(); ++idx)
	{
		std::cout << vec1[idx] << " ";
	}
	std::cout << std::endl;

	std::vector<int> vec2(5); //0으로 초기화된 size가 5인 컨테이너
	vec2[0] = 10;
	vec2[1] = 20;
	vec2[2] = 30;
	vec2[3] = 40;
	vec2[4] = 50;

	for (std::vector<int>::size_type idx = 0; idx < vec2.size(); ++idx)
	{
		std::cout << vec2[idx] << " ";
	}
	std::cout << std::endl;

	return 0;
}

