// Section_03_map의insert()반환값.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <map>

int main()
{
	std::map<int, int> m;
	std::pair<std::map<int, int>::iterator, bool> pr; //insert의 결과 pair 객체

	m.insert(std::pair<int, int>(5, 100));
	m.insert(std::pair<int, int>(3, 100));
	m.insert(std::pair<int, int>(8, 30));
	m.insert(std::pair<int, int>(4, 40));
	m.insert(std::pair<int, int>(1, 70));
	m.insert(std::pair<int, int>(7, 100));

	pr = m.insert(std::pair<int, int>(9, 50)); //성공

	if (true == pr.second)
		std::cout << pr.first->first << ", value: "
		<< pr.first->second <<  " 저장완료! " << std::endl;
	else
		std::cout << "key 9가 이미 있습니다." << std::endl;

	pr = m.insert(std::pair<int, int>(9, 50));

	if (true == pr.second)
		std::cout << pr.first->first << ", value: "
		<< pr.first->second << "저장완료! " << std::endl;
	else
		std::cout << "key 9가 이미 있습니다." << std::endl;

	return 0;
}

