// const멤버_비const.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Point
{
private:
    int x, y;
public:
    Point(int _x = 0, int _y = 0): x(_x),y(_y)
    { }
    int GetX() const
    {
        return x;
    }
    int GetY() const
    {
        return y;
    }
    void SetX(int _x)
    {
        x = _x;
    }
    void SetY(int _y)
    {
        y = _y;
    }
    void print() const
    {
        std::cout << x << ", " << y << std::endl;
    }
};


int main()
{
    
    const Point p1(0, 0);
    Point p2(2, 3);

    p1.print();
    p2.print();
    
    std::cout << "p1: " << p1.GetX() << " ," << p1.GetY() << std::endl;
    std::cout << "p2: " << p2.GetX() << " ," << p2.GetY() << std::endl;

    p2.SetX(5);
    p2.SetY(5);

    p2.print();
}

