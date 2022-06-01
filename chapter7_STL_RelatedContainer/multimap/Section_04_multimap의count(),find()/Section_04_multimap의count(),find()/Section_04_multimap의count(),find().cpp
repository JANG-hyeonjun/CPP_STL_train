// Section_04_multimap의count(),find().cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
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

	std::multimap<int, int>::iterator iter;
	for (iter = mm.begin(); iter != mm.end(); ++iter)
	{
		std::cout << "(" << iter->first << ", " << iter->second << ")" << " ";
	}
	std::cout << std::endl;

	std::cout << "key 3의 원소개수는 " << mm.count(3) << std::endl;

	iter = mm.find(3);
	if (iter != mm.end())
		std::cout << "첫번째 key 3에 매핑된 value: " << iter->second << std::endl;

	return 0;
}

