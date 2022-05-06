// Section_03_함수템플릿_foreach.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>

template<typename IterT, typename Func>
void For_each(IterT begin, IterT end, Func pf)
{
	//넘어가면서 임시객체가 복상생성자에의해 복상생성 되는듯 
	while (begin != end)
	{
		//pf(*begin++);
		pf.operator() (*begin++);
		//그러면 해당임시객체.operator() (*begin++)이넘어가는것 
		//*begin은 해당자료형에 대한 진짜 값을 가지고 있고 
		//그래서 넘길때 컴파일러는 템플릿 함수 매개 변수를 알수 없으니 
		//우리가 명시적으로 넘기는것 
	}
}

//template<typename T>
//void Print(T data)
//{
//	std::cout << data << " ";
//}
template <typename T>
class PrintFunctor
{
private:
	std::string sep;
public:
	explicit PrintFunctor(const std::string& s = " ") : sep(s)
	{ }
	void operator() (T data) const
	{
		std::cout << data << sep;
	}
};
//해당책에서 하고 싶은말 만약 클라이언트가 아니라 뭔가 함수가 이미 자료형을 알고있으면
//암시적 명시적 상관이 없다

//그러나 템플릿을 이용했는데 컴파일러가 템플릿의 매개변수를 알수 없는 상황 
//이를테면 다음과 같이 클라이언트가 인터페이스의 사용자 자료형을 정의한다면 
//이런식으로 해야하는것 

int main()
{
	int arr[5] = { 10,20,30,40,50 };
	For_each(arr, arr + 5, PrintFunctor<int>());
	std::cout << std::endl;
	//중요한점은 템플릿 매개변수를 컴파일러가 유추할수가 없으니 
	//명시적으로 매개변수 인자Print<int>,Print<string>으로 지정해야한다 
	std::string sarr[3] = { "abc","ABCDE","Hello!" };
	For_each(sarr, sarr + 3, PrintFunctor<std::string>("*\n"));


	return 0;
}

