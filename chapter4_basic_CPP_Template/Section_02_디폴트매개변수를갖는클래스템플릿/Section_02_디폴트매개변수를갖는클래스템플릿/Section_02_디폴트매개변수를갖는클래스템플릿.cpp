// Section_02_클래스템플릿Array.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>

template<typename T = int ,int capT = 100>
class Array
{
private:
	T* buf;
	int size;
	int capacity;
public:
	explicit Array(int cap = 100) : buf(0), size(0), capacity(cap)
	{
		buf = new T[capacity];
	}

	~Array()
	{
		delete[] buf;
		//포인터지만 배열의 첫번째 요소 주소를 가지고 있으므로 
		//delete도 배열 
	}

	void Add(T data)
	{
		buf[size++] = data;
	}

	T operator[](int idx) const
	{
		return buf[idx];
	}
	int GetSize() const
	{
		return size;
	}
};


int main()
{
	Array<> iarr; //디폴트 int ,100 사용 
	iarr.Add(10);
	iarr.Add(20);
	iarr.Add(30);

	for (size_t idx = 0; idx < iarr.GetSize(); ++idx)
	{
		std::cout << iarr[idx] << std::endl;
	}
	std::cout << std::endl;

	Array<double>darr; //디폴트 매개변수 100사용 
	darr.Add(10.12);
	darr.Add(20.12);
	darr.Add(30.12);

	for (size_t idx = 0; idx < darr.GetSize(); ++idx)
	{
		std::cout << darr[idx] << std::endl;
	}
	std::cout << std::endl;

	Array<std::string,10> sarr;
	sarr.Add("abc");
	sarr.Add("ABC");
	sarr.Add("Hello!");

	for (size_t idx = 0; idx < sarr.GetSize(); ++idx)
	{
		std::cout << sarr[idx] << std::endl;
	}
	std::cout << std::endl;

	return 0;
}

