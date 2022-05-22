// Section_01_reverseIterator_insert.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vec;
	for (size_t idx = 0; idx < 5; ++idx)
	{
		vec.emplace_back((idx + 1) * 10);
	}
	
	std::vector<int>::iterator iter;
	std::vector<int>::reverse_iterator riter;

	for (iter = vec.begin(); iter != vec.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	for (riter = vec.rbegin(); riter != vec.rend(); ++riter)
	{
		std::cout << *riter << " ";
	}
	std::cout << std::endl;
	
	//vector insert -> 반복자가 가리키는 위치에 원소값을 추가 할수 있으며 중요한것은 
	//삽입 위치부터 뒤에 있는 모든 원소는 뒤로 밀려납니다.

	iter = vec.begin() + 2;
	std::vector<int>::iterator iter2;
	
	iter2 = vec.insert(iter, 100);
	for (auto value : vec)
	{
		std::cout << value << " ";
	}
	std::cout << std::endl;
	std::cout << "iter2: " << *iter2 << std::endl;

	///////////////////////////////////////////////////////////////////////////////
	//또한 vector는 insert멤버함수 와 반복자 쌍 구간을 사용하여 원소를 삽입할수 있는 
	//버전의 insert도 존재 

	//iter가 가리키는 위치에 정수 100을 3개 삽입 
	vec.clear();
	std::vector<int>().swap(vec);

	for (size_t idx = 0; idx < 5; ++idx)
	{
		vec.emplace_back((idx + 1) * 10);
	}
	
	iter = vec.begin() + 2;
	vec.insert(iter, 3, 100);

	for (iter = vec.begin(); iter != vec.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	/////////////////////////////////////////////////////
	std::vector<int> vec2;

	vec2.emplace_back(100);
	vec2.emplace_back(200);
	vec2.emplace_back(300);

	iter = vec2.begin() + 1;

	//iter이 가리키는 위치에 [vec.begin(), vec.end()) 구간의 원소를 삽입
	vec2.insert(iter, vec.begin(), vec.end());

	for (iter = vec2.begin(); iter != vec2.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	return 0;
}

