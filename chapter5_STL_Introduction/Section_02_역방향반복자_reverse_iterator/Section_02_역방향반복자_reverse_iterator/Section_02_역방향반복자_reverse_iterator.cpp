// Section_02_역방향반복자_reverse_iterator.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>



int main()
{
	std::vector<int> vec;

	vec.emplace_back(10);
	vec.emplace_back(20);
	vec.emplace_back(30);
	vec.emplace_back(40);
	vec.emplace_back(50);

	for (std::vector<int>::iterator iter = vec.begin(); iter != vec.end(); ++iter)
	{
		std::cout << *iter << " ";
	}
	std::cout << std::endl;

	/*std::reverse_iterator<std::vector<int>::iterator> riter(vec.end());
	std::reverse_iterator<std::vector<int>::iterator> enditer(vec.begin());

	for (; riter != enditer; ++riter)
	{
		std::cout << *riter << " ";
	}
	std::cout << std::endl;*/
	
	//STL컨테이너의 역방향 반복자가 필요한 경우라면 직접 생성하지도 않고도 역방향 
	//반복자를 얻을수 있다.
	//모든 STL컨테이터는 자신의 역방향 반복자를 typedef 타입으로 정의하며 
	//rbegin() 과 rend() 멤버함수로 순차열의 시작과 끝원소를 가리키는 반복자 쌍을 반환한다

	std::vector<int>::reverse_iterator riter(vec.rbegin());
	for (; riter != vec.rend(); ++riter)
	{
		std::cout << *riter << std::endl;
	}
	std::cout << std::endl;
	return 0;
}

