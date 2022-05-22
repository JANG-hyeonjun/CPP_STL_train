// Section_01_vector와vector비교.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

int main()
{
	//마지막으로 vector의 컨테이너 연산자
	//컨테이너 와 컨테이너 연산자를 비교하기 위해 만들어졌으며 다른 컨테이너 모두 제공되어짐
	// 컨테이너 연산자는 == <= >= != 가 있음
	std::vector<int> vec1;

	for (size_t idx = 0; idx < 5; ++idx)
	{
		vec1.emplace_back((idx + 1) * 10);
	}

	std::vector<int> vec2;
	vec2.emplace_back(10);
	vec2.emplace_back(20);
	vec2.emplace_back(50);

	if (vec1 == vec2)
		std::cout << "vec1 == vec2" << std::endl;
		//모든 원소가 같다면 참 아니면 거짓
	if (vec1 != vec2)
		std::cout << "vec1 != vec2" << std::endl;
	if (vec1 < vec2)
		std::cout << "vec1 < vec2" << std::endl;
		//모든 원소를 비교하다가 조건을 만족하면 참이 되어짐 
	
	return 0;
}




