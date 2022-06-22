// remove()후의erase()멤버함수사용.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	//remove알고리즘은 순차열의 원소를 논리적으로 제거할 뿐 실제 제거하지는 않는다.
	//만약 실제 컨테이너의 size까지 변경하려면 컨테이너의 erase() 멤버함수를 사용
	std::vector<int>vec;

	vec.emplace_back(10);
	vec.emplace_back(20);
	vec.emplace_back(30);
	vec.emplace_back(40);
	vec.emplace_back(30);
	vec.emplace_back(50);

	std::cout << "vec: ";
	for (std::vector<int>::size_type idx = 0; idx < vec.size(); ++idx)
	{
		std::cout << vec.at(idx) << " ";
	}
	std::cout << std::endl;

	std::vector<int>::iterator iter_end = std::remove(vec.begin(), vec.end(), 30);

	std::cout << "vec: ";
	for (std::vector<int>::size_type idx = 0; idx < vec.size(); ++idx)
	{
		std::cout << vec.at(idx) << " ";
	}
	std::cout << std::endl;

	//구간 [iter_end, vec,end())의 원소를 삭제
	vec.erase(iter_end, vec.end());

	for (std::vector<int>::iterator iter = vec.begin(); iter != vec.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;


	return 0;
}

