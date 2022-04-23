// Section_06_배열인덱스연산자오버로딩.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Point
{
private:
    int x, y;
public:
    Point(int _x = 0, int _y = 0) : x(_x),y(_y)
    { }
    void print() const
    {
        std::cout << x << ',' << y << std::endl;
    }
    int operator[](int idx) 
    {
        if (idx == 0)
            return x;
        else if (idx == 1)
            return y;
        else
            throw "이럴수는 없는거야";
    }


};

int main()
{
    Point pt(1, 2);

    pt.print();

    std::cout << pt[0] << ',' << pt[1] << std::endl;
    return 0;

}

