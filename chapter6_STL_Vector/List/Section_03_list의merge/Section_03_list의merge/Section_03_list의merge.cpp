// Section_03_list의merge.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <list>

int main()
{
	std::list<int>* lt1 = new std::list<int>;
	std::list<int>* lt2 = new std::list<int>;

	for (size_t idx = 5; idx >= 1; --idx)
	{
		lt1->emplace_back(idx * 10);
	}

	//lt2->emplace_back(25); //lt1과 lt2의 정렬방식이 다르면 오류
	//lt2->emplace_back(35);
	//lt2->emplace_back(60);

	lt2->emplace_back(60);
	lt2->emplace_back(35);
	lt2->emplace_back(25);
	
	std::cout << "lt1: ";
	for (std::list<int>::iterator iter = lt1->begin(); iter != lt1->end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	std::cout << "lt2: ";
	for (std::list<int>::iterator iter = lt2->begin(); iter != lt2->end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	lt1->merge(*lt2, std::greater<int>());
	//기본은 less 오름차순 정리 


	std::cout << "=======================" << std::endl;

	std::cout << "lt1: ";
	for (std::list<int>::iterator iter = lt1->begin(); iter != lt1->end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	std::cout << "lt2: ";
	for (std::list<int>::iterator iter = lt2->begin(); iter != lt2->end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	return 0;
}

