// Section_02_for_each()의알고리즘을사용한원소의 수정.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>


void Func(int& ref)
{
    ref += 5;
}

int main()
{
    std::vector<int> vec;
    for (size_t idx = 0; idx < 5; ++idx)
    {
        vec.emplace_back((idx + 1) * 10);
    }

    std::cout << "vec: ";
    for(std::vector<int>::size_type idx = 0; idx < vec.size(); ++idx)
    {
        std::cout << vec.at(idx) << " ";
    }
    std::cout << std::endl;

    std::for_each(vec.begin(), vec.end(), Func);
    std::cout << "vec: ";
    for(std::vector<int>::size_type idx = 0; idx < vec.size(); ++idx)
    {
        std::cout << vec.at(idx) << " ";
    }
    std::cout << std::endl;

    return 0;
}

