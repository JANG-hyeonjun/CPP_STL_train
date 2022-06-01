// Section_03_map의insert.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <map>

int main()
{
	std::map<int, int> m;
	m.insert(std::pair<int, int>(5, 100)); //임시 pair객체 생성후 저장
	m.insert(std::pair<int, int>(3, 100));
	m.insert(std::pair<int, int>(8, 30));
	m.insert(std::pair<int, int>(4, 40));
	m.insert(std::pair<int, int>(1, 70));
	m.insert(std::pair<int, int>(7, 100));

	std::pair<int, int> pr(9, 50);
	m.insert(pr);

	std::map<int, int>::iterator iter;
	for (iter = m.begin(); iter != m.end(); ++iter)
	{
		std::cout << "(" << (*iter).first << ", " << (*iter).second << ")" << " ";
	}
	std::cout << std::endl;

	//반복자는 -> 연산자가 연산자 오버로딩 되어 있어서
	//포인터 처럼 멤버를 -> 연산자로 접근할 수 있다,

	for (iter = m.begin(); iter != m.end(); ++iter)
	{
		std::cout << "(" << iter->first << ", " << iter->second << ")" << " ";
	}
	std::cout << std::endl;

	//예전에는 클래스 포인터 멤버 연산자가 없어서 
	//클래스 포인터 이름 -> 멤버이름 = (*클래스 포인터 이름).멤버이름 식이 성립하지 않음 
	//멤버 연산자는 . -> 가 있는데 해당 연산자를 구조체 연산자라고도 하며 
	//헷갈리는 이유는 iter이 포인터로 선언이 안되어 있어서 그런 것 
	//정확하게 반복자는 포인터와 같지는 않지만 비슷한 기능이 만들어져 있기 때문에 문법적인것이 같은 것

	return 0;
}

