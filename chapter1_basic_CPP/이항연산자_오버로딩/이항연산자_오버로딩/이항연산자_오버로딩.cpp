// 이항연산자_오버로딩.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Point
{
private:
    int x, y;

public:
    Point(int _x = 0,int _y = 0): x(_x),y(_y)
    { }
    void Print() const
    {
        std::cout << x << ", " << y << std::endl;
    }
    bool operator==(const Point& arg) const
    {
        return arg.x == x && arg.y == y ? true : false;
    }
    bool operator!=(const Point& arg) const
    {
        return !(*this == arg);
    }
};


int main()
{
    Point p1(2, 3), p2(5, 5), p3(2, 3);

    if (p1 == p2)
    {
        std::cout << "p1 == p2" << std::endl;
    }
    if(p1 == p3)
    {
        std::cout << "p1 == p3" << std::endl;
    }
    if (p1 != p2)
    {
        std::cout << "p1 != p2" << std::endl;
    }
    if (p1 != p3)
    {
        std::cout << "p1 != p3" << std::endl;
    }
    
    return 0;
}

