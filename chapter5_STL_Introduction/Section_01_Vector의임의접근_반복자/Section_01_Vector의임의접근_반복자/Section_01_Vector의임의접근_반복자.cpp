// Section_01_Vector의임의접근_반복자.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
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
	//넣는 방법은 push_back 과 emplace_back이 있다.
	//둘의 차이는 push_back은 '객체'를 집어넣는 형식으로 객체가 없이 삽입을 하려면 임시객체(rValue)가 
	//있어야함 즉 이는 move기 호출되었다는 의미 or 복사 생성자가 호출 

	//반면 emplace back은 생성자로 넘길인자만 넘겨주기 때문에 컴파일러는 알아서 
	//생성자중에 해당 인자를 받을수 있는 생성자를 찾아내 내부에서 생성 시켜준다 
	//객체복제는 물론 이동도 필요없이 함수 내부에서 생성하여 삽입하므로 생성자 소멸자를 한번씩만 
	//호출하여 춸씬 효율적이다 
	std::vector<int>::iterator iter = vec.begin();

	std::cout << iter[0] << std::endl; //itrer[i] -> iter + i번째 원소에 접근(역참조) 합니다
	std::cout << iter[1] << std::endl;
	std::cout << iter[2] << std::endl;
	std::cout << iter[3] << std::endl;
	std::cout << iter[4] << std::endl;
	std::cout << std::endl;


	iter += 2; //+=연산 지원 -> iter 을 n만큼 이동 
	std::cout << *iter << std::endl;
	std::cout << std::endl;

	auto iter2 = iter + 2; //+연산
	std::cout << *iter2 << std::endl;

	return 0;
}

