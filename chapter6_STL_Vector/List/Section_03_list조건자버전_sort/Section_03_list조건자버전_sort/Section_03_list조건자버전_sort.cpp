// Section_03_list조건자버전_sort.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <list>

//sort()는 이항 조건 조건자를 사용하며 이항조건자가 참이면 두원소 left 와 right를 바꾸지 않고 
//거짓이면 두원소를 바꿔가며 정렬한다. 

template <typename T>
class Greater
{
public:
    bool operator() (T& left, T& right) const
    {
        return left > right;
    }
};

int main()
{
    std::list<int> lt;

    lt.emplace_back(20);
    lt.emplace_back(10);
    lt.emplace_back(30);
    lt.emplace_back(50);
    lt.emplace_back(40);

    std::list<int>::iterator iter;

    for (iter = lt.begin(); iter != lt.end(); ++iter)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;

    lt.sort(Greater<int>());
    
    for (iter = lt.begin(); iter != lt.end(); ++iter)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;

    lt.sort(std::less<int>());
    
    for (iter = lt.begin(); iter != lt.end(); ++iter)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;

    lt.sort(std::greater<int>());

    for (iter = lt.begin(); iter != lt.end(); ++iter)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;

    return 0;
}

