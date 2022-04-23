// Section_05_전역함수를이용한_연산자오버로딩.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

//연산자 오버로딩은 왼쪽개체 k가 연산자 오버로딩 객체가 아니므로
//전역함수 연산자 오버로딩을 함께 사용하여야 한다.

class Point
{
private:
    int x;
    int y;
public:
    Point(int _x = 0,int _y = 0) : x(_x),y(_y)
    { }

    void print() const
    {
        std::cout << x << ", " << y << std::endl;
    }
    int GetX() const
    {
        return x;
    }
    int GetY() const
    {
        return y;
    }
    void setX(int x)
    {
        this->x = x;
    }
    void setY(int y)
    {
        this->y = y;
    }

};

//const Point가 반환 된다는 의미이기에 const 멤버 함수만 호출 가능 하다 
//객체가 const로 생성되었을시 const가 붙은 멤버함수만 사용할 수 있다, 
//하지만 const가 붙지않은 일반객체도 const멤버함수를 호출

////const가 붙지 않은 일반 객체도 const멤버 함수를 호출할 수 있다. (호출 못 할거라고 착각했었다 😥) 단, const가 붙은 객체는 const멤버 함수만 호출할 수 있다.
//매개 변수가 const 객체인 함수들은 인수로 받은 해당 객체의 멤버 함수를 사용할 때 꼭 뒤에 const가 붙은 함수만 사용할 수 있게 된다.
//함수에 인수로 객체를 넘길 때, 그 안에서 사용될 일이 있는 멤버 함수라면 뒤에 const를 붙여주어야 한다.
//getter 같은 접근 함수는 많이 사용되고 또한 멤버 값을 변경하지 않기 때문에 그냥 뒤에 const를 붙여서 구현해주자.

const Point operator-(const Point& argL, const Point& argR)
{
    return Point(argL.GetX() - argR.GetX(), argL.GetY() - argR.GetY());
}

int main()
{
    Point p1(2, 3), p2(3, 5);
    Point p3;

    p3 = p1 - p2;
    p3.print();
    p3.setX(3);
    p3.print();

    return 0;
}

