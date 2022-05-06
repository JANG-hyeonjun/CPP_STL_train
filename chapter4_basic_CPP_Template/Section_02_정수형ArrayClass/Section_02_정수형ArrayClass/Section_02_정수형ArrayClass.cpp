// Section_02_정수형ArrayClass.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Array
{
private:
    int* buf;
    int size; //원소개수 
    int capacity; //저장 가능한 메모리 크기
public:
    explicit Array(int cap = 100) : buf(0), size(0), capacity(cap)
    { 
        buf = new int[capacity];
        //포인터에 배열을 동적할당해서 저장 
        //이공간을 사용하기위해서는 접근(참조를 사용)
        //그래서 시작주소를 리턴해준다 그게 buf에 저장 
        //포인터가 배열명을 저장하면 즉 포인터가 시작주소를 저장하면 
        //배열처럼 사용할수 있다는 말과 동일 
    }
    ~Array()
    {
        delete[] buf;
    }
    void Add(int data)
    {
        buf[size++] = data;
    }
    int operator[](int idx) const
    {
        return buf[idx];
    }
    int Getsize() const
    {
        return size;
    }
};

int main()
{
    Array arr;
    arr.Add(10);
    arr.Add(20);
    arr.Add(30);

    for (size_t idx = 0; idx < arr.Getsize(); ++idx)
    {
        std::cout << arr[idx] << std::endl;
    }
    return 0;
}
//기능은 모두 동일한데 그러면 오버로딩을 계속해서 만든다? -> 가독성이 떨어질것이다
//그래서 클래스 템플릿을 만든다.
