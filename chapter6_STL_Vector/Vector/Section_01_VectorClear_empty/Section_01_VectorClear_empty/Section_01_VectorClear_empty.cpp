// Section_01_VectorClear_empty.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>


int main()
{
	std::vector<int> vec(5);

	vec[0] = 10;
	vec[1] = 20;
	vec[2] = 30;
	vec[3] = 40;
	vec[4] = 50;
	
	for (std::vector<int>::size_type idx = 0; idx < vec.size(); ++idx)
	{
		std::cout << vec[idx] << " ";
	}
	std::cout << std::endl;

	std::cout << "size: " << vec.size() << " capacity: " << vec.capacity() << std::endl;

	vec.clear();
	//vec을 비운다. 
	std::cout << "size: " << vec.size() << " capacity: " << vec.capacity() << std::endl;

	if (vec.empty())
	{
		std::cout << "vector에 원소가 없습니다." << std::endl;
	}
	//vector에서 실제 할당된 메모리 공간의 크기를 capacity라고 한다.
	//empty는 size가 0인것을 말하는것 같다.

	std::vector<int> v(5);
	std::cout << "size: " << v.size() << " capacity: " << v.capacity() << std::endl;

	std::vector<int>().swap(v);
	//기본 생성자로 만든 Vector 컨테이너와 v 컨테이너를 swap한다.
	//이건 임시객체이며 capacity는 0이다. 
	//임시객체는 R Value성질 가졌으니 이런식으로 권장을 하는것 같다.

	std::cout << "size: " << v.size() << " capacity: " << v.capacity() << std::endl;

	if (v.empty())
	{
		std::cout << "v에 원소가 없습니다." << std::endl;
	}

	return 0;
}

