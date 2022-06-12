// Section_02_replace_copy()_replace_copy_if.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>


bool Pred(int n)
{
	return n <= 30;
}

int main()
{
	//벡터(배열) 포인터 
	//배열 포인터는 어떤 백터의 임시객체를 가리키는 것이다.
	std::vector<int>* vec1 = new std::vector<int>();
	vec1->emplace_back(10);
	vec1->emplace_back(20);
	vec1->emplace_back(30);
	vec1->emplace_back(40);
	vec1->emplace_back(30);
	vec1->emplace_back(50);


	std::vector<int>* vec2 = new std::vector<int>(6);
	std::vector<int>* vec3 = new std::vector<int>(6);

	//사용자 조건에 맞는 원소를 수정하여 목적지 순차열로 복사하려면 replace_copy() 와 replace_copy_if()를 사용
	std::cout << "vec1: ";
	for (size_t idx = 0; idx < vec1->size(); ++idx)
	{
		std::cout << vec1->at(idx) << " ";
	}
	std::cout << std::endl;

	std::cout << "vec2: ";
	for (size_t idx = 0; idx < vec2->size(); ++idx)
	{
		std::cout << vec2->at(idx) << " ";
	}
	std::cout << std::endl;

	std::cout << "vec3: ";
	for (int idx = 0; idx < vec3->size(); ++idx)
	{
		std::cout << (*vec3)[idx] << " ";
		//*vec은 -> 배열명 과 동일 

	}
	std::cout << std::endl;

	std::vector<int>::iterator iter_end = std::replace_copy(vec1->begin(), vec1->end(), vec2->begin(), 30, 0);
	iter_end = std::replace_copy_if(vec1->begin(), vec1->end(), vec3->begin(), Pred, 0);

	std::cout << "vec1: ";
	for (size_t idx = 0; idx < vec1->size(); ++idx)
	{
		std::cout << vec1->at(idx) << " ";
	}
	std::cout << std::endl;

	std::cout << "vec2: ";
	for (size_t idx = 0; idx < vec2->size(); ++idx)
	{
		std::cout << vec2->at(idx) << " ";
	}
	std::cout << std::endl;

	std::cout << "vec3: ";
	for (int idx = 0; idx < vec3->size(); ++idx)
	{
		std::cout << (*vec3)[idx] << " ";
		//*vec은 -> 배열명 과 동일 

	}
	std::cout << std::endl;

	
	int arr[2][3] = { 1,2,3,4,5,6 };
	int(*parr)[3] = (arr + 1);
	printf("%p\n", arr);
	printf("%p\n", *arr);
	std::cout << arr + 1 << std::endl;
	//arr[1] 은 두번째 부분배열의 주소 
	std::cout << *(arr + 1)[0] << std::endl;
	std::cout << (*(parr - 1))[0] << std::endl;
	//*(arr + 1) == arr[1]

	//이것의 원리가 위와 동일한 것
	vec1->clear();
	vec2->clear();
	vec3->clear();

	delete vec1;
	delete vec2;
	delete vec3;
	
	return 0;
}

