#include <iostream>
#include <vector>
#include <algorithm>

bool Pred(const int left, const int right)
{
    return 3 < right - left;
}

int main() {

    std::vector<int> vec;

    vec.emplace_back(40);
    vec.emplace_back(46);
    vec.emplace_back(12);
    vec.emplace_back(80);
    vec.emplace_back(10);
    vec.emplace_back(47);

    vec.emplace_back(30);
    vec.emplace_back(55);
    vec.emplace_back(90);
    vec.emplace_back(53);

    //이진탐색의 동작원리는 a==b를 원소를 사용하지 않으며 !(a < b) && !(b < a) 연산을 사용한다 .
    std::cout << "[v 원본]: ";
    for(std::vector<int>::iterator iter = vec.begin(); iter != vec.end(); ++iter)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;

    std::sort(vec.begin(),vec.end(),Pred);

    std::cout << "[v 정렬]: ";
    for(std::vector<int>::iterator iter = vec.begin(); iter != vec.end(); ++iter)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;

    if(std::binary_search(vec.begin(),vec.end(),32,Pred))
        std::cout << "32 원소가 존재합니다." << std::endl;
    else
        std::cout << "32 원소가 존재하지 않습니다. " << std::endl;

    if(std::binary_search(vec.begin(),vec.end(),35,Pred))
        std::cout << "35 원소가 존재합니다." << std::endl;
    else
        std::cout << "35 원소가 존재하지 않습니다 " << std::endl;

    return 0;
}
