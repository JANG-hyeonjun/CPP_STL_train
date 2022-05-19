// Section_01_Vector의resize.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vec(5);
	//기본값 0으로 초기화된 size가 5인 컨테이너

	vec[0] = 10;
	vec[1] = 20;
	vec[2] = 30;
	vec[3] = 40;
	vec[4] = 50;

	for (std::vector<int>::size_type idx = 0; idx < vec.size(); ++idx)
	{
		std::cout << vec[idx] << " ";
	}
	std::cout << std::endl;
	std::cout << "size: " << vec.size() << " capacity: " << vec.capacity() << std::endl;

	vec.resize(10); //기본값 0으로 초기화된 size가 10인 컨테이너 확장 

	for (std::vector<int>::size_type idx = 0; idx < vec.size(); ++idx)
	{
		std::cout << vec[idx] << " ";
	}
	std::cout << std::endl;
	std::cout << "size: " << vec.size() << " capacity: " << vec.capacity() << std::endl;

	vec.resize(5);
	for (std::vector<int>::size_type idx = 0; idx < vec.size(); ++idx)
	{
		std::cout << vec[idx] << " ";
	}
	std::cout << std::endl;
	std::cout << "size: " << vec.size() << " capacity: " << vec.capacity() << std::endl;

	return 0;
}

