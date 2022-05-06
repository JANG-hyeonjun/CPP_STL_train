// Section_02_ObjectInfo_특수화버전.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>

template<typename T>
class ObjectInfo
{
private:
	T data;
public:
	ObjectInfo(const T& d): data(d){ }
	void Print()
	{
		std::cout << "타입: " << typeid(data).name() << std::endl;
		std::cout << "크기: " << sizeof(data) << std::endl;
		std::cout << "값: " << data << std::endl;
		std::cout << std::endl;
	}
};

template<> //T를 string으로 특수화 (클래스 템플릿 특수화)
class ObjectInfo<std::string>
{
private:
	std::string data;
public:
	ObjectInfo(const std::string& d): data(d)
	{}
	void Print()
	{
		std::cout << "타입: " << "string" << std::endl;
		std::cout << "문자열 길이: " << data.size() << std::endl;
		std::cout << "값: " << data << std::endl;
		std::cout << std::endl;
	}
};

int main()
{
	
	ObjectInfo<int> d1(10);
	d1.Print();

	ObjectInfo<double> d2(5.5);
	d2.Print();

	ObjectInfo<std::string> d3("Hello!");
	d3.Print();

	return 0;
}

