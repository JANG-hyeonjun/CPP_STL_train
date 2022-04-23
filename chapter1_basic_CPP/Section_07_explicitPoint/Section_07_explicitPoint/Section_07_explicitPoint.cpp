// Section_07_explicitPoint.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


class Point
{
private:
    int x, y;
public:
    explicit Point(int _x = 0,int _y = 0):x(_x), y(_y)
    { }
    void Print() const
    {
        std::cout << x << ',' << y << std::endl;
    }
};

int main()
{
    Point pt;
    pt.Print();

    //pt = 10 -> 에러
    pt = Point(10); //-> Point(10,0)호출
    pt.Print();

    return 0;
}

