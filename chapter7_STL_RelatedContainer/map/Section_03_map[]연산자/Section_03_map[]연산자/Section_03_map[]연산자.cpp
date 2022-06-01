// Section_03_map[]연산자.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <map>

int main()
{
	std::map<int, int> m;
	
	m[5] = 100; //key 5, value 100의 원소를 m에 삽입한다.
	m[3] = 100;
	m[8] = 30;
	m[4] = 40;
	m[1] = 70;
	m[7] = 100;
	m[9] = 50;

	std::map<int, int>::iterator iter;
	for (iter = m.begin(); iter != m.end(); ++iter)
	{
		std::cout << "(" << iter->first << ", " << iter->second << ")" << " ";
	}
	std::cout << std::endl;

	m[5] = 200; //key 5의 value 200으로 갱신한다.

	for (iter = m.begin(); iter != m.end(); ++iter)
	{
		std::cout << "(" << iter->first << ", " << iter->second << ")" << " ";
	}
	std::cout << std::endl;

	return 0;
}

