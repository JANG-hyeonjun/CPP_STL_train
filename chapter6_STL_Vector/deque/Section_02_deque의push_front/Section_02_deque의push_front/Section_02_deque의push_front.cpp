// Section_02_deque의push_front.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <deque>

int main()
{
    std::deque<int> dq;

    for (size_t idx = 0; idx < 5; ++idx)
    {
        dq.emplace_back((idx + 1) * 10);
    }

    for (std::deque<int>::size_type idx = 0; idx < dq.size(); ++idx)
    {
        std::cout << dq.at(idx) << " ";
    }
    std::cout << std::endl;

    dq.push_front(100);
    dq.push_front(200);
    
    for (std::deque<int>::size_type idx = 0; idx < dq.size(); ++idx)
    {
        std::cout << dq.at(idx) << " ";
    }

    return 0;
}

