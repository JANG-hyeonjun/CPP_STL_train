// ++연산자_오버로딩.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


class Point
{
private:
    int x, y;
public:
    Point(int _x = 0, int _y = 0) :x(_x), y(_y)
    { }
    void print() const
    {
        std::cout << x << ", " << y << std::endl;
    }
    const Point& operator++()
    {
        ++x;
        ++y;
        return *this;
    }
    const Point operator++(int)
    {
        Point pt(x, y);
        ++x;
        ++y;
        return pt;
    }
    //멤버 함수명 뒤에 const -> 해당 함수에서 멤버 변수를 읽기 전용 RDONLY으로 사용하겠다는 표시
    //멤버 함수 앞에 const -> const기능을 가지는 값으로 반환 반환된 값은 변경하지 못하도록 하기위해서 사용 
    const Point& operator--()
    {
        --x;
        --y;
        return *this;
    }
    const Point& operator--(int)
    {
        Point pt(x, y);
        --x;
        --y;
        return pt;
    }
};

int main()
{
    Point p1(2, 3), p2(2, 3);
    Point result;

    result = ++p1;
    p1.print();
    result.print();

    result = p2++;
    p2.print();
    result.print();

    std::cout << "operator()--" << std::endl;

    result = --p1;
    p1.print();
    result.print();

    result = p2--;
    p2.print();
    result.print();

    return 0;
}

