#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec(5,0);
   // std::cout << vec.size() << std::endl;
    for(size_t idx = 0; idx < vec.size(); ++idx )
    {
        vec.at(idx) = (idx + 1) * 10;
    }

    std::vector<int>::iterator iter;
    std::vector<int>::iterator iter2;
    std::vector<int>::iterator iter3;

    for(iter = vec.begin(); iter != vec.end(); ++iter)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;

    iter = vec.begin() + 2;
    //iter2가 가리키는 원소의 위치를 제거 iter2 의 다음 원소는 40
    iter2 = vec.erase(iter);

    for(iter = vec.begin(); iter != vec.end(); ++iter)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;
    std::cout << *iter2 << std::endl;

    //[vec.begin() + 1, vec.end()) 구간의 원소를 제거
    iter3 = vec.erase(vec.begin() + 1 ,vec.end());
    //iter2 은 다음원소를 v.end()를 가리킴
    for(iter = vec.begin(); iter != vec.end(); ++iter)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;
    std::cout << "예상하는 바로는 iter3는 0: " << *iter3 << std::endl;
    std::cout << *(vec.end()) << std::endl;
    if(iter3 == vec.end())
    {
        std::cout << "둘은 같다" << std::endl;
    }
    return 0;
}
