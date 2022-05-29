// Section_01_set의count(),find().cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <set>

int main()
{
	std::set<int> s;

	s.insert(50);
	s.insert(30);
	s.insert(80);
	s.insert(40);
	s.insert(10);
	s.insert(70);
	s.insert(90);

	std::set<int>::iterator iter;
	for (iter = s.begin(); iter != s.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;
	
	std::cout << "원소 50의 개수" << s.count(50) << std::endl;
	std::cout << "원소 100의 개수" << s.count(100) << std::endl;
	

	//연관 컨테이너 핵심 멤버 함수 find()는 key()원소를 검색하여 key를 가리키는 반복자를 반환 한다.
	//만약 key(원소)가 없으면 끝 표시  반복자를 반환한다. end() 멤버함수가 끝표시 반복자를 반환 하므로 
	//end() 멤버 함수와 비교해 검색이 성공했는지 못했는지 판단한다.

	iter = s.find(30);
	if (iter != s.end())
		std::cout << *iter << "가 s에 있다." << std::endl;
	else
		std::cout << "해당 원소는 존제 X" << std::endl;

	return 0;
}

