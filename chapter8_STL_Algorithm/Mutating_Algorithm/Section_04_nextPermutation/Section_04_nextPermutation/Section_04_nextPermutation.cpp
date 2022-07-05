// Section_04_nextPermutation.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>
//next Permutation 순차열을 사전순 다음 순열이 되게 한다.
//다음 순열이 없는 마지막 순열일 경우 false를 반환

//prev Permutation 순차열을 사전순 이전 순열이 되게 한다.
//더이상 순열이 없는 첫 순열이라면 false를 반환 

int main()
{
    std::vector<int> vec;

    vec.emplace_back(10);
    vec.emplace_back(20);
    vec.emplace_back(30);

    std::cout << "v: " << vec[0] << " " << vec[1] << " " << vec[2] << std::endl;
    std::cout << std::next_permutation(vec.begin(), vec.end()) << std::endl;
    std::cout << "v: " << vec[0] << " " << vec[1] << " " << vec[2] << std::endl;
    std::cout << std::next_permutation(vec.begin(), vec.end()) << std::endl;
    std::cout << "v: " << vec[0] << " " << vec[1] << " " << vec[2] << std::endl;
    std::cout << std::next_permutation(vec.begin(), vec.end()) << std::endl;
    std::cout << "v: " << vec[0] << " " << vec[1] << " " << vec[2] << std::endl;
    std::cout << std::next_permutation(vec.begin(), vec.end()) << std::endl;
    std::cout << "v: " << vec[0] << " " << vec[1] << " " << vec[2] << std::endl;
    std::cout << std::next_permutation(vec.begin(), vec.end()) << std::endl;
   
    //마지막
    std::cout << "v: " << vec[0] << " " << vec[1] << " " << vec[2] << std::endl;
    std::cout << std::next_permutation(vec.begin(), vec.end()) << std::endl;
    std::cout << "v: " << vec[0] << " " << vec[1] << " " << vec[2] << std::endl;

    return 0;
}

