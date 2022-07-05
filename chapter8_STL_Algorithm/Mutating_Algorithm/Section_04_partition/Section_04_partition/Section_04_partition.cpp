// Section_04_partition.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>
bool Pred(int n)
{
    return n < 40;
}

//원소를 특정기준으로 구분 partition 상대적인 순서를 무시하고 분류 
//원소를 특정기준으로 구분 stable_partition 상대적인 순서를 고려하여 분류 

int main()
{
    std::vector<int>vec;

    vec.emplace_back(30);
    vec.emplace_back(40);
    vec.emplace_back(50);
    vec.emplace_back(10);
    vec.emplace_back(20);
    vec.emplace_back(60);

    std::cout << "v: ";
    for (std::vector<int>::size_type idx = 0; idx < vec.size(); ++idx)
    {
        std::cout << vec.at(idx) << " ";
    }
    std::cout << std::endl;

    std::vector<int>::iterator iter_sep;
    iter_sep = std::stable_partition(vec.begin(), vec.end(), Pred);

    //Pred(*p)가 참인 원소는 [v.begin(),iter_sep) 거짓은 [iter_sep , v.end)순차열에 저장

    for (auto iter = vec.begin(); iter != iter_sep; ++iter)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;

    for (auto iter = iter_sep; iter != vec.end(); ++iter)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;


    return 0;
}

