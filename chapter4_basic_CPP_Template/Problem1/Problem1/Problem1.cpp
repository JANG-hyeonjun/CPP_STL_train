// Problem1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


struct MyType
{
	std::string str;
	int number;
};

template<typename T>
void Copy(T* target, const T* source, int size)
{
	for (size_t idx = 0; idx < size; ++idx)
	{
		target[idx] = source[idx];
	}
}
template<typename T>
void Print_arr(T* arr,int size)
{
	for (size_t idx = 0; idx < size; ++idx)
	{
		std::cout << arr[idx] << " ";
	}
	std::cout << std::endl;
}

template<>
void Print_arr<MyType>(MyType* arr, int size)
{
	for (size_t idx = 0; idx < size; ++idx)
	{
		std::cout << arr[idx].str << ", " << arr[idx].number << std::endl;
	}
}

int main()
{
	int arr1[5] = { 10,20,30,40,50 };
	int arr2[5];

	Copy(arr2, arr1, 5);
	Print_arr(arr2, 5);
	
	MyType myArr1[5] = { {"Hello",1},{"Hel",2},{"Hllo",3}};
	MyType myArr2[5] = {};

	Copy(myArr2, myArr1,5);
	Print_arr(myArr2, 3);

	return 0;
}

