// Section_01_배열출력함수템플릿.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

template<typename T,int size>
void PrintArray(T* arr) //배열명은 주소이므로 당연히 포인터로 받아야한다. - C 기본 
{
    for (size_t idx = 0; idx < size; ++idx)
    {
        std::cout << "[" << idx << "]: " << arr[idx] << std::endl;
    }
    std::cout << std::endl;
}

int main()
{
    int arr1[5] = { 10,20,30 ,40,50 };
    PrintArray<int, 5>(arr1);

    double arr2[3] = {1.1,2.2,3.3};
    PrintArray<double, 3>(arr2);
    //함수 템플릿의 매개변수로 타입뿐만아니라 정수도 가능하든점이 중요 단 
    //클라이언트 코드에서 위처럼 명시적으로 호출해야한다 이유는 함수인자 arr1이라는것만 받고
    //컴파일러는 사이즈 5라는 정보는 추론할수가 없기 때문이다. 

    //즉이렇게 명시적으로 호출하게 됨으로써 PrintArray<int,5>() 함수와 PrintArray<double,3>()
    //이라는 인스턴스를 생성한다. 

    return 0;
}

