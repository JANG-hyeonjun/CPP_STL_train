// Section_03_list_splice().cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <list>

int main()
{
	std::list<int> lt1;
	std::list<int> lt2;

	for (size_t idx = 0; idx < 5; ++idx)
	{
		lt1.emplace_back((idx + 1) * 10);
	}
	
	for (size_t idx = 0; idx < 5; ++idx)
	{
		lt2.emplace_back((idx + 1) * 100);
	}
	
	std::list<int>::iterator iter;

	std::cout << "lt1: ";
	for (iter = lt1.begin(); iter != lt1.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	std::cout << "lt2: ";
	for (iter = lt2.begin(); iter != lt2.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	for (int i = 0; i < 20; ++i)
		std::cout << "=";
	std::cout << std::endl;
	
	iter = lt1.begin();
	++iter;
	++iter;
	lt1.splice(iter, lt2); //iter이 가리키는 위치에 lt2의 모든 원소를 잘라 붙임

	std::cout << "lt1: ";
	for (iter = lt1.begin(); iter != lt1.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	std::cout << "lt2: ";
	for (iter = lt2.begin(); iter != lt2.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	////////////////// list splice다른 버전 /////////////////
	for (int i = 0; i < 20; ++i)
		std::cout << "=";
	std::cout << std::endl;
	std::list<int> lt3;
	std::list<int> lt4;

	for (size_t idx = 0; idx < 5; ++idx)
	{
		lt3.emplace_back((idx + 1) * 10);
	}

	for (size_t idx = 0; idx < 5; ++idx)
	{
		lt4.emplace_back((idx + 1) * 100);
	}

	std::list<int>::iterator iter1;
	std::list<int>::iterator iter2;

	std::cout << "lt3: ";
	for (iter1 = lt3.begin(); iter1 != lt3.end(); ++iter1)
	{
		std::cout << *iter1 << " ";
	}
	std::cout << std::endl;

	std::cout << "lt4: ";
	for (iter2 = lt4.begin(); iter2 != lt4.end(); ++iter2)
	{
		std::cout << *iter2 << " ";
	}
	std::cout << std::endl;

	iter1 = lt3.begin();
	++iter1;
	++iter1; //30의 원소를 가리킴

	iter2 = lt4.begin();
	++iter2; //200 원소를 가리킴

	lt3.splice(iter1, lt4, iter2);
	//lt3 에사 iter1이 가리키는 위치에 iter2가 가리키는 위치의 lt4원소를 잘라 붙임

	for (int i = 0; i < 20; ++i)
		std::cout << "==";
	std::cout << std::endl;
	
	std::cout << "lt3: ";
	for (iter1 = lt3.begin(); iter1 != lt3.end(); ++iter1)
	{
		std::cout << *iter1 << " ";
	}
	std::cout << std::endl;

	std::cout << "lt4: ";
	for (iter2 = lt4.begin(); iter2 != lt4.end(); ++iter2)
	{
		std::cout << *iter2 << " ";
	}
	std::cout << std::endl;


	for (int i = 0; i < 20; ++i)
		std::cout << "==";
	std::cout << std::endl;
	//lt3.end()가 가리키는 위치에 순차열 [lt4.begin(),lt4.end()) 를 잘라 붙임
	lt3.splice(lt3.end(), lt4, lt4.begin(), lt4.end());

	std::cout << "lt3: ";
	for (iter1 = lt3.begin(); iter1 != lt3.end(); ++iter1)
	{
		std::cout << *iter1 << " ";
	}
	std::cout << std::endl;

	std::cout << "lt4: ";
	for (iter2 = lt4.begin(); iter2 != lt4.end(); ++iter2)
	{
		std::cout << *iter2 << " ";
	}
	std::cout << std::endl;


	return 0;
}

