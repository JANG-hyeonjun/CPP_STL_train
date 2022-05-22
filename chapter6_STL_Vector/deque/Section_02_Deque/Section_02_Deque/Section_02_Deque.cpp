// Section_02_Deque.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include<deque>


int main()
{
    std::deque<int> dq;
    
    for (std::deque<int>::size_type idx = 0; idx < 10; ++idx)
    {
        dq.emplace_back((idx + 1) * 10);
    }

    for (std::deque<int>::size_type idx = 0; idx < dq.size(); ++idx)
    {
        std::cout << dq[idx] << " ";
    }
    std::cout << std::endl;
    //vector 와 deque는 메모리 할당 정책에 차이를 보임
    //vecto는 새로운 원소가 추가 될떄 메모리 재할당과 이전 원소 복사 문제가 발생함
    //deque는 이처럼 vector의 단점을 해결하고자 여러 메모리 블록을 할당하고 사용자 에게는 하나의 블록처럼
    //보이게 하는 정책을 사용 즉 원소의 추가시 메모리가 부족할떄마다 일정한 크기의
    //새로운 메모리 블록 할당과 이전 메모리를 제거하거나 이전 원소를 복사하는등의 연산을 수행 하지 않음 
    

    return 0;
}

