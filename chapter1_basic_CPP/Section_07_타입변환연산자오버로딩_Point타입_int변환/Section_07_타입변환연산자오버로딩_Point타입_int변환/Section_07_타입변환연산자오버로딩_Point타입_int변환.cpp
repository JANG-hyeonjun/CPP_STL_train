// Section_07_타입변환연산자오버로딩_Point타입_int변환.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class A
{

};

class B
{
public:
    operator A()
    {
        std::cout << "operator A()호출" << std::endl;
        return A();
    }

    operator int()
    {
        std::cout << "operator int()호출" << std::endl;
        return 10;
    }

    operator double()
    {
        std::cout << "operator double() 호출" << std::endl;
        return 5.5;
    }
};

class Point
{
private:
    int x, y;
public:
    explicit Point(int _x = 0, int _y = 0) : x(_x),y(_y)
    { }
    void Print() const
    {
        std::cout << x << ", " << y << std::endl;
    }
    operator int()  const
    {
        return x;
    }

};

int main()
{
   A a;
   int n;
   double d;
   B b;
   //주의할점은 타입변환 연산자는 생성자 소멸자처럼 반환 타입을 지정하지 않는다,
   a = b; //B타입 객체를 A타입으로 변환하기 위해 타입 변환 연산자 b.operator A()멤버함수를 호출 
   n = b;
   d = b;
   std::cout << std::endl;

   a = b.operator A();
   n = b.operator int();
   d = b.operator double();
   std::cout << std::endl;

   int number = 10;
   Point pt(2, 3);
   number = pt; // n = pt.operator int()

   std::cout << number << std::endl;

   return 0;
}


