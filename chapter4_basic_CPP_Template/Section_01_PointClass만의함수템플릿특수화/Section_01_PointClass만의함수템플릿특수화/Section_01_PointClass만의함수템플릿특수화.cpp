// SEction_01_Point객체를출력하지못하는함수템플릿.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Point
{
private:
    int x, y;
public:
    explicit Point(int _x = 0, int _y = 0) : x(_x), y(_y)
    { }
    void Print() const
    {
        std::cout << x << ", " << y << std::endl;
    }
};

//일반 함수 템플릿 
template <typename T>
void Print(T a)
{
    std::cout << a << std::endl;
}

template<>
void Print(Point a) //명시적인 코드: void Print<Point>
{
    std::cout << "Print 특수화 버전" << std::endl;
    a.Print();
}

int main()
{
    int n = 10;
    double d = 2.5;
    Point pt(2, 3);

    Print(n);
    Print(d);
    Print(pt);
    //해당 부분이 컴파일 에러를 일으킨다. std::cout << pt -> 즉 인터페이스가 정의되어 있지 않으니까
    //해결방법 1. 연산자 오버로딩 -> 하지만 소스코드로 지원되지않는 라이브라리 상태등 
    //Point class를 수정할수 없는 상황이라면?
    //해결방법 2. Point 객체만의 특수화된 함수 템플릿을 작성 

    return 0;
}

