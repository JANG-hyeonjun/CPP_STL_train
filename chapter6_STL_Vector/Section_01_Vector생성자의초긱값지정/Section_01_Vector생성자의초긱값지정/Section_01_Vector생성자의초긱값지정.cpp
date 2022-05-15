// Section_01_Vector생성자의초긱값지정.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

int main()
{
	std::vector<int> vec1(5);
	for (std::vector<int>::size_type idx = 0; idx < vec1.size(); ++idx)
	{
		std::cout << vec1[idx] << " ";;
	}
	std::cout << std::endl;

	std::vector<int>vec2(5, 0);
	for (std::vector<int>::size_type idx = 0; idx < vec2.size(); ++idx)
	{
		std::cout << vec2[idx] << " ";;
	}
	std::cout << std::endl;

	std::vector<int>vec3(5, 10);
	for (std::vector<int>::size_type idx = 0; idx < vec3.size(); ++idx)
	{
		std::cout << vec3[idx] << " ";
	}
	std::cout << std::endl;

	return 0;
}

//생성자 뿐만 아니라 resize()멤버함수를 사용하여 컨테이너 size를 변경할수 있다
//하지만 주의 할점은 size를 키울때 capacity도 늘어나지만 size를 줄일때는 capacity가 줄지 않는다는것입니다.

