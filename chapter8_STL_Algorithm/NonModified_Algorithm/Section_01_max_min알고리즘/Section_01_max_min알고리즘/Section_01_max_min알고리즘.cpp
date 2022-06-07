// Section_01_max_min알고리즘.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>

class Point
{
private:
	int x, y;
public:
	explicit Point(int _x = 0,int _y = 0):x(_x),y(_y){}
	int GetX() const { return x; }
	int GetY() const { return y; }
	void Print() const { std::cout << '(' << x << ',' << y << ')' << std::endl; }
};

bool XCompare(const Point& left, const Point& right)
{
	return left.GetX() < right.GetX();
}

bool YCompare(const Point& left, const Point& right)
{
	return left.GetY() < right.GetY();
}

int main()
{
	int a = 10, b = 20;
	int r;

	r = std::max(a, b);
	std::cout << "max: " << r << std::endl;
	r = std::min(a, b);
	std::cout << "min: " << r << std::endl;

	Point pt1(5, 8), pt2(3, 9);
	Point pt3;

	pt3 = std::max(pt1, pt2, XCompare);
	std::cout << "x max: ";  pt3.Print();

	pt3 = std::max(pt1, pt2, YCompare);
	std::cout << "y max: ";  pt3.Print();

	return 0;
}


