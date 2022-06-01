// Section_02_multiset의찾기관련함수.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <set>

int main()
{
	std::multiset<int> ms;

	ms.insert(50);
	ms.insert(30);
	ms.insert(80);
	ms.insert(80);
	ms.insert(30);
	ms.insert(70);
	ms.insert(10);

	std::multiset<int>::iterator iter;
	for (iter = ms.begin(); iter != ms.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;
	
	std::cout << "30 원소의 개수: " << ms.count(30) << std::endl;

	iter = ms.find(30); //30 첫번째 원소의 반복자 
	std::cout << "iter: " << *iter << std::endl;
	
	std::multiset<int>::iterator lower_iter;
	std::multiset<int>::iterator upper_iter;

	lower_iter = ms.lower_bound(30); //30순차열의 시작 반복자 
	upper_iter = ms.upper_bound(30); //30순차열의 끝 반복자

	std::cout << "lower_iter: " << *lower_iter << ", "
		<< "upper_iter: " << *upper_iter << std::endl;

	std::cout << "구간 [lower_iter, upper_iter)의 순차열: ";
	for (iter = lower_iter; iter != upper_iter; ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	return 0;
}

