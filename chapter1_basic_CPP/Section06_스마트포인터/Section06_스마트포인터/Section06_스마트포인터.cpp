// Section06_스마트포인터.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Point
{
private:
	int x, y;
public:
	Point(int _x = 0,int _y = 0): x(_x),y(_y)
	{ }
	void print() const
	{
		std::cout << x << ',' << y << std::endl;
	}
};

class PointPtr
{
private:
	Point* ptr;
public:
	PointPtr(Point *p):ptr(p)
	{ }
	~PointPtr()
	{
		delete ptr;
	}
	Point* operator->() const
	{
		return ptr;
	}
	Point& operator*() const
	{
		return *ptr;
	}

};


int main()
{
	Point* p1 = new Point(2, 3);
	PointPtr p2 = new Point(5, 5);

	p1->print();
	p2->print();
	std::cout << std::endl;

	(*p1).print();
	(*p2).print();

	delete p1;

	return 0;
}

