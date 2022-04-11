// 연산자_오버로딩_1_4.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Point
{
private:
	int x, y;
public:
	Point(int _x = 0, int _y = 0) : x(_x),y(_y)
	{}
	void print() const
	{
		std::cout << x << ", " << y << std::endl;
	}
	const Point operator+(const Point& arg) const
	{
		Point pt;
		pt.x = this->x + arg.x;
		pt.y = this->y + arg.y;
		return pt;
	}
};

int main()
{
	Point p1(2, 3), p2(5, 5);
	Point p3;

	p3 = p1 + p2;
	p3.print();

	p3 = p1.operator+(p2);
	p3.print();

	return 0;
}