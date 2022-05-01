// Section_02_멤버함수포인터.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Point
{
private:
	int x, y;
public:
	explicit Point(int _x = 0, int _y = 0) :x(_x), y(_y)
	{ }
	void Print() const
	{
		std::cout << x << ',' << y << std::endl;
	}
	void PrintInt(int n)
	{
		std::cout <<"테스트 정수 : " << n << std::endl;
	}
};

int main()
{
	Point pt(2, 3);
	Point* p = &pt;
	
	void (Point:: *pf1)() const;
	pf1 = &Point::Print;

	void(Point:: * pf2)(int);
	pf2 = &Point::PrintInt;

	pt.Print();
	pt.PrintInt(10);
	std::cout << std::endl;

	(pt.*pf1)();
	(pt.*pf2)(10);
	std::cout << std::endl;


	(p->*pf1)();
	(p->*pf2)(10);
	
	return 0;
}

