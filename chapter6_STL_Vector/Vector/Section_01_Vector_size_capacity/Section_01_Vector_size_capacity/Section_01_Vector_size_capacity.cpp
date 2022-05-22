// Section_01_Vector_size_capacity.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>


int main()
{

	std::vector<int> v;

	/*
	v.emplace_back(10);
	v.emplace_back(20);
	v.emplace_back(30);
	v.emplace_back(40);
	v.emplace_back(50);

	for (std::vector<int>::size_type idx = 0; idx < v.size(); ++idx)
	{
		std::cout << v[idx] << std::endl;
	}
	std::cout << std::endl;

	std::cout << v.size() << std::endl;
	std::cout << v.capacity() << std::endl;
	std::cout << v.max_size() << std::endl;
	*/


	//std::vector<int> v;
	v.reserve(8);
	std::cout << "size: " << v.size() << "capacity: " << v.capacity() << std::endl;
	v.emplace_back(10);
	std::cout << "size: " << v.size() << "capacity: " << v.capacity() << std::endl;
	v.emplace_back(20);
	std::cout << "size: " << v.size() << "capacity: " << v.capacity() << std::endl;
	v.emplace_back(30);
	std::cout << "size: " << v.size() << "capacity: " << v.capacity() << std::endl;
	v.emplace_back(40);
	std::cout << "size: " << v.size() << "capacity: " << v.capacity() << std::endl;
	v.emplace_back(50);
	std::cout << "size: " << v.size() << " capacity: " << v.capacity() << std::endl;
	v.emplace_back(60);
	std::cout << "size: " << v.size() << "capacity: " << v.capacity() << std::endl;
	v.emplace_back(70);
	std::cout << "size: " << v.size() << "capacity: " << v.capacity() << std::endl;
	v.emplace_back(80);
	std::cout << "size: " << v.size() << "capacity: " << v.capacity() << std::endl;
	v.emplace_back(90);
	std::cout << "size: " << v.size() << "capacity: " << v.capacity() << std::endl;

	//v.size()는 unsigned int타입을 반환하기 떄문에 컴파일러 경고가 출력 된다.
	//그래서 vector내에 typedef된 멤버형식을 사용하는것이다. 
	//vector의 size_type은 원소의 개수나 []연산자 등의 index로 사용하는 형식의
	//typedef된 멤버 형식이다.

	for (std::vector<int>::size_type idx = 0; idx < v.size(); ++idx)
	{
		std::cout << v[idx] << " ";
	}
	std::cout << std::endl;

	return 0;
}

