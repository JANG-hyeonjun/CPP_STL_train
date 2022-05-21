// Section_01_erase.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec;
    
    for (size_t idx = 0; idx < 5; ++idx)
    {
        vec.emplace_back((idx + 1) * 10);
    }


   

    return 0;
}

