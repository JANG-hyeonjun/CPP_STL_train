#include <iostream>
#include <vector>


int main() {
    std::vector<int> vec;
    for(size_t idx = 0; idx < 5; ++idx)
    {
        vec.emplace_back((idx + 1) * 10);
    }

    std::vector<int> vec2(vec.begin(),vec.end());
    //순차열 [vec.begin() , vec.end())로 vec2를 초기화

    std::vector<int>::iterator iter;
    for(iter = vec2.begin(); iter != vec2.end(); ++iter)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;

    std::vector<int> vec3;
    vec3.assign(vec.begin(),vec.end());
    
    for(iter = vec.begin(); iter != vec.end(); ++iter)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;

    return 0;
}
