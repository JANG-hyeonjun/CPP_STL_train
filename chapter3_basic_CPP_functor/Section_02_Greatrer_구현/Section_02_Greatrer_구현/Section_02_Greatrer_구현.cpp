// Section_02_Greatrer_구현.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <functional>

class Less
{
public:
    bool operator() (int a, int b)
    {
        return a < b;
    }
};

class Greater
{
public:
    bool operator() (int a, int b)
    {
        return a > b;
    }
};



int main()
{
    std::cout << Less() (10, 20) << std::endl;
    std::cout << Less() (20, 10) << std::endl; //임시객체의 암묵적 호출 
    std::cout << Greater() (10, 20) << std::endl;
    std::cout << Greater() (20, 10) << std::endl;
    std::cout << std::endl;

    std::cout << std::less<int>() (10, 20) << std::endl; //STL의 less greater 사용 
    std::cout << std::less<int>() (20, 10) << std::endl;

    std::cout << std::greater<int>() (10, 20) << std::endl;
    std::cout << std::greater<int>() (20, 10) << std::endl;

    return 0;
}

