// Section_01_const반복자.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

int main()
{
	std::vector<int>vec;
	int arr[5] = { 10,20,30,40,50 };

	for (size_t idx = 0; idx < 5; ++idx)
	{
		vec.emplace_back((idx + 1) * 10);
	}

	std::vector<int>::iterator iter = vec.begin();
	int* p = arr; //배열명은 첫번째 요소의 주소 
	std::cout << *iter << ", " << *p << std::endl;
	//다음원소로 이동가능 원소의 값 변경가능 

	std::vector<int>::const_iterator citer = vec.begin();
	const int* cp = arr;
	std::cout << *citer << ", " << *cp << std::endl;
	//다음원소로 이동가능 원소의 값 변경불가 

	const std::vector<int>::iterator iter_const = vec.begin();
	int* const p_const = arr;
	std::cout << *iter_const << ", " << *p_const << std::endl;
	//다음원소로 이동불가 원소의 값 변경가능 

	const std::vector<int>::const_iterator citer_const = vec.begin();
	const int* const cp_const = arr;
	std::cout << *citer_const << ", " << *cp_const << std::endl;
	//다음원소로 이동불가 원소의 값 변경불가 
	return 0;
}

