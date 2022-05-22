// Section_01_vector_front_back.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

//시퀀스 컨테이너는 삽입위치(순서)개념이 있으므로 모든 시퀀스 컨테이너
//vector list deque는 첫 번째 원소의 참조와 마지막 원소의 참조인 front(),back()멤버 함수를 제공한다

int main()
{
	std::vector<int> vec;
	vec.emplace_back(10);
	vec.emplace_back(20);
	vec.emplace_back(30);
	vec.emplace_back(40);
	vec.emplace_back(50);

	for (std::vector<int>::size_type idx = 0; idx < vec.size(); ++idx)
	{
		std::cout << vec[idx] << " ";
	}
	std::cout << std::endl;

	std::cout << vec[0] << ", " << vec.front() << std::endl;
	std::cout << vec[4] << ", " << vec.back() << std::endl;

	//front(), back()은 첫번째 와 마지막 원소의 참조이므로 멤버함수를 이용해 원소의 값또한 수정이가능
	vec.front() = 100;
	//함수의 반환자 const int& 이말은 상수 참조자를 받아와서 그것을 100으로 변경한다는 의미
	vec.back() = 500;
	//아래도 이와 동일 

	for(std::vector<int>::size_type idx = 0; idx < vec.size(); ++idx)
	{
		std::cout << vec[idx] << " ";
	}
	std::cout << std::endl;

	return 0;
}

