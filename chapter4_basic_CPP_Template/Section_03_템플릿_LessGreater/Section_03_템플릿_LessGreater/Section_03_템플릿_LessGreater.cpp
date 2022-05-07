// Section_03_템플릿_LessGreater.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <functional>

template<typename T>
class Less
{
public:
    bool operator() (T a, T b)
    {
        return a < b;
    }
};

template<typename T>
class Greater
{
public:
    bool operator()(T a, T b)
    {
        return a > b;
    }
};
//아무래도 STL의 std::less , std::greater가 이런식으로 구현되었다는것을 보여주고 싶었던 듯 
int main()
{
    std::cout << Less<int>() (10, 20) << std::endl; //사용사 Less,Greater사용 
    std::cout << Less<int>() (20, 10) << std::endl;
    std::cout << Greater<int>() (10, 20) << std::endl; //사용사 Less,Greater사용 
    std::cout << Greater<int>() (20, 10) << std::endl;
    std::cout << std::endl;

    std::cout << std::less<int>() (10, 20) << std::endl; //STL의 less,greater
    std::cout << std::less<int>() (20, 10) << std::endl; //STL의 less,greater
    std::cout << std::greater<int>() (10, 20) << std::endl; //STL의 less,greater
    std::cout << std::greater<int>() (20, 10) << std::endl; //STL의 less,greater
    std::cout << std::endl;

    std::cout << std::less<double>() (10.5, 20.3) << std::endl; //STL의 less,greater
    std::cout << std::less<double>() (20, 10) << std::endl; //STL의 less,greater
    std::cout << std::greater<double>() (10, 20) << std::endl; //STL의 less,greater
    std::cout << std::greater<double>() (20, 10) << std::endl; //STL의 less,great

    return 0;
}

