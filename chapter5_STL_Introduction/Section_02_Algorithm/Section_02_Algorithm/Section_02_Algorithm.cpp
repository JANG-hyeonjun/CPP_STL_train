// Section_02_Algorithm.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

/// <알고리즘 설명 >
/// STL은 순차열의 원소를 조사,변경,관리,처리할 목적으로 알고리즘이라는 구성요소를 제공 
/// 알고리즘은 대부분은 순방향 반복자를 요구하지만 
/// 몇몇 알고리즘은 임의 접근 반복자를 요구한다.
/// 알고리즘의 범주는 7개 이며
///	1.원소를 수정하지않는 알고리즘(nonmodifying Algorithm)
/// 2.원소를 수정하는 알고리즘(modifying Algorithm)
/// 3.제거 알고리즘(removing Algorithm)
/// 4.변경 알고리즘(mutating Algorithm)
/// 5.정렬 알고리즘(sorting Algorithm)
/// 6.정렬된 범위 알고리즘(sorted range Algorithm)
/// 7.수치 알고리즘(numeric Algorithm)
/// <returns></returns>

int main()
{
	std::vector<int>vec;

	vec.emplace_back(10);
	vec.emplace_back(20);
	vec.emplace_back(30);
	vec.emplace_back(40);
	vec.emplace_back(50);

	std::vector<int>::iterator iter;
	iter = std::find(vec.begin(), vec.end(), 20);
	if (iter == vec.end())
		std::cout << "해당 요소는 찾지 못했습니다." << std::endl;
	else
		std::cout << *iter << std::endl;
	
	iter = std::find(vec.begin(), vec.end(), 100);
	if (iter == vec.end())
		std::cout << "해당 요소는 찾지 못했습니다." << std::endl;
	else
		std::cout << *iter << std::endl;

	//순차열을 정렬하는 sort 알고리즘은 임의 접근 반복자를 요구하므로 
	//vector 와 deque는 알고리즘을 수행할수 있지만 다른 컨테이너는 불가능 하다.

	// 예를들어 list는 불가능하다 
	std::vector<int> arr;
	arr.emplace_back(10);
	arr.emplace_back(40);
	arr.emplace_back(30);
	arr.emplace_back(50);
	arr.emplace_back(20);



	std::list<int> lt;
	lt.emplace_back(10);
	lt.emplace_back(30);
	lt.emplace_back(40);
	lt.emplace_back(50);
	lt.emplace_back(20);

	sort(arr.begin(), arr.end());
	for (std::vector<int>::iterator iter = arr.begin(); iter != arr.end(); ++iter)
	{
		std::cout << *iter << std::endl;
	}
	//sort(lt.begin(), lt.end());

	return 0;
}

