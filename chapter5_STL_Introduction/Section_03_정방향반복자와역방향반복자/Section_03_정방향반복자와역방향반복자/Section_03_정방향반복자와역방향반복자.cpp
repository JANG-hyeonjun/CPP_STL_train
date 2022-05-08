// Section_03_정방향반복자와역방향반복자.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

int main()
{
	std::vector<int>vec;

	vec.emplace_back(10);
	vec.emplace_back(20);
	vec.emplace_back(30);
	vec.emplace_back(40);
	vec.emplace_back(50);
	
	std::vector<int>::iterator normal_iter = vec.begin() + 3;
	//40 원소를 가리키는 정방향 반복자
	std::vector<int>::reverse_iterator reverse_iter(normal_iter);
	//normal_iter의 역방향 반복자

	std::cout << "정방향 반복자의 값: " << *normal_iter << std::endl;
	std::cout << "역방향 반복자의 값: " << *reverse_iter << std::endl;
	std::cout << std::endl;

	for (auto iter = vec.begin(); iter != normal_iter; ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	for (auto riter = reverse_iter; riter != vec.rend(); ++riter)
	{
		std::cout << *riter << " ";
	}
	std::cout << std::endl;

	return 0;
}

