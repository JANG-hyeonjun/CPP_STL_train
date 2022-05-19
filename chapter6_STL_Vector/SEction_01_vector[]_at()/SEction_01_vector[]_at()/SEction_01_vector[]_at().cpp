// SEction_01_vector[]_at().cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

//[]연산자와 at()멤버 함수의 기능이나 결과는 같다.
//[]연산자와 at()멤버함수의 차이점은 범위점검을 하느냐 하지 않느냐 일뿐
//v.at(i)는 i가 0 <= i < size이면 i index의 참조르 반환하며 아니면 out_of_range예외가 발생

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

	vec[0] = 100;
	vec[4] = 500;
	//범위 점검없는 index원소의 참조 
	for (std::vector<int>::size_type idx = 0; idx < vec.size(); ++idx)
	{
		std::cout << vec[idx] << " ";
	}
	std::cout << std::endl;

	vec.at(0) = 1000;
	vec.at(4) = 5000;
	//범위 점검있는 index원소의 참조 

	for (std::vector<int>::size_type idx = 0; idx < vec.size(); ++idx)
	{
		std::cout << vec[idx] << " ";
	}
	std::cout << std::endl;

	try
	{
		std::cout << vec.at(0) << std::endl;
		std::cout << vec.at(3) << std::endl;
		std::cout << vec.at(6) << std::endl;
	}
	catch (std::out_of_range &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}

