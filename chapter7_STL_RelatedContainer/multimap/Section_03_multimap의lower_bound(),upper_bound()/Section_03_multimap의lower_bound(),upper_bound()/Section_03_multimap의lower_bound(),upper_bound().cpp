// Section_03_multimap의lower_bound(),upper_bound().cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <map>

int main()
{
	std::multimap<int, int> mm;

	mm.insert(std::pair<int, int>(5, 100));
	mm.insert(std::pair<int, int>(3, 100));
	mm.insert(std::pair<int, int>(8, 30));
	mm.insert(std::pair<int, int>(3, 40));
	mm.insert(std::pair<int, int>(1, 70));
	mm.insert(std::pair<int, int>(7, 100));
	mm.insert(std::pair<int, int>(8, 50));
	
	std::multimap<int, int>::iterator lower_iter;
	std::multimap<int, int>::iterator upper_iter;

	lower_iter = mm.lower_bound(3);
	upper_iter = mm.upper_bound(3);

	std::cout << "구간 [lower_iter,upper_iter)의 순차열: ";
	std::multimap<int, int>::iterator iter;
	for (iter = lower_iter; iter != upper_iter; ++iter)
	{
		std::cout << "(" << iter->first << ", " << iter->second << ")" << " ";
	}
	std::cout << std::endl;

	std::pair<std::multimap<int, int>::iterator, std::multimap<int, int>::iterator> iter_pair;
	iter_pair = mm.equal_range(3);
	
	std::cout << "구간 [iter = iter_pair.first,iter_pair.second)의 순차열: ";
	for (iter = iter_pair.first; iter != iter_pair.second; ++iter)
	{
		std::cout << "(" << iter->first << ", " << iter->second << ")" << " ";
	}
	std::cout << std::endl;

	//multimap은 중복 키를 저장해야하기 때문에 []연산자를 지원하지 않는다.
	return 0;
}

