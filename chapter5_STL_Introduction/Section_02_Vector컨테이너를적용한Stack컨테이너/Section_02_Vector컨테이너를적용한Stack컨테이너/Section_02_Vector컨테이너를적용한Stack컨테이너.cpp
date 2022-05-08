// Section_02_Vector컨테이너를적용한Stack컨테이너.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <stack>


int main()
{
	std::stack<int, std::vector<int>> st;

	st.push(10);
	st.push(20);
	st.push(30);

	std::cout << st.top() << std::endl;
	st.pop();

	std::cout << st.top() << std::endl;
	st.pop();

	std::cout << st.top() << std::endl;
	st.pop();

	if (st.empty())
		std::cout << "stack에 데이터 없음" << std::endl;

	return 0;
}

