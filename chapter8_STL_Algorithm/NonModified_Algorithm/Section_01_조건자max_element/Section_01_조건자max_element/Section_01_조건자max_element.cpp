// Section_01_조건자max_element.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <algorithm>
#include <vector>

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

bool Compare (const Point& pt1, const Point& pt2) 
{
	if (pt1.GetX() < pt2.GetX())
		return true;
	else if (pt1.GetX() > pt2.GetX())
		return false;
	else
		return pt1.GetY() < pt2.GetY();
}

int main()
{
	std::vector<Point> pVec;
	pVec.emplace_back(Point(3, 2));
	pVec.emplace_back(Point(2, 5));
	pVec.emplace_back(Point(1, 5));
	pVec.emplace_back(Point(3, 3));
	pVec.emplace_back(Point(3, 2));

	std::vector<Point>::iterator iter = std::max_element(pVec.begin(), pVec.end(), Compare);
	std::cout << "max: "; iter->Print();
	std::cout << "max: "; (*iter).Print();

	return 0;
}

