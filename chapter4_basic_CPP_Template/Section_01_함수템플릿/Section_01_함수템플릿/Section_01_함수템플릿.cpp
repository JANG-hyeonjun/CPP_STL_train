// Section_01_함수템플릿.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

template<typename T>
void Print(T a, T b)
{
	//std::cout << typeid(a).name() << std::endl; //그변수의 자료형을 확인하는 방법
	std::cout << a << "," << b << std::endl;
}
template<typename T1,typename T2>
void Print(T1 a, T2 b)
{
	std::cout << a << "," << b << std::endl;
}

int main()
{
	//암시적 호출 
	Print(10, 20);
	Print(0.123, 1.123);
	Print("ABC", "abcde");

	//클라이언트가 직접 타입을 지정하고 명시적으로 함수 호출도 가능 
	Print<int>(10, 20);
	Print<double>(0.123, 1.123);
	Print<const char*>("ABC", "abcde");
	
	//해당 함수 템플릿에의해 만들어지는 함수를 함수 템플릿 인스턴스라고 한다.
	//해당 과정은 컴파일러가 진행해준다, 즉 컴파일러 함수 코드를 정의해 주는것 
	//다양한 매개변수를 갖는 것도 가능하다.
	Print(10,1.5);
	Print("Hello", 1.123);
	Print(1.5, "abcde");




	return 0;
}
//예를들어 정수,실수,문자열을 출력하게하는 프린트함수를 오버로딩하는 방법도 있지만 
//만약 어떤 클라이언트쪽에서 사용자타입을 정의해서 서버 함수를 호출한다면 
//함수 오버로딩으로 이를 해결할수 없다 -> 클라이언트가 어떤 타입을 사용하여 
//함수(서버코드)를 호출할지 미리 알지 못하기 때문입니다. 

//간혹 template<class T>가 있는데 이것은 지원은 되나 c++표준화 이전에 만들어 지던것 

