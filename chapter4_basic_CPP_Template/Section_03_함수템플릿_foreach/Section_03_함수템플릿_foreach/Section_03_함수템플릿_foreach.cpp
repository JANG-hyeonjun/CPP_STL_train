// Section_03_함수템플릿_foreach.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>

template<typename IterT,typename Func>
void For_each(IterT begin, IterT end, Func pf)
{
	while (begin != end)
	{
		pf(*begin++);
	}
}

template<typename T>
void Print(T data)
{
	std::cout << data << " ";
}


int main()
{
	int arr[5] = { 10,20,30,40,50 };
	For_each(arr, arr + 5, Print<int>);
	std::cout << std::endl;
	//중요한점은 템플릿 매개변수를 컴파일러가 유추할수가 없으니 
	//명시적으로 매개변수 인자Print<int>,Print<string>으로 지정해야한다 
	std::string sarr[3] = { "abc","ABCDE","Hello!" };
	For_each(sarr, sarr + 3, Print<std::string>);


	return 0;
}

