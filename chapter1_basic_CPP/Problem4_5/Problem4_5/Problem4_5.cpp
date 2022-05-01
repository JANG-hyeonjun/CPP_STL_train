// Problem4_5.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

class String
{
private:
	char buf[100];
public:
	String(const char* str)
	{ 
		strcpy(buf, str);
	}
	operator const char*()
	{
		return buf;
	}
};

int main()
{
	String s("Hello!");
	const char* sz = s;
	std::cout << sz << std::endl;

	const char* sz2 = "Hello!";
	String s2 ("Hi~!");
	s2 = sz2; // sz(sz2)암묵적 생성자를 이용 
	std::cout << sz << std::endl;

	return 0;
}

