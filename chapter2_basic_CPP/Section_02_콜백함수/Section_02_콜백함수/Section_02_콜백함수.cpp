// Section_02_콜백함수.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void Client();



/// 서버 /////////////
void PrintHello()
{
    std::cout << "Hello!" << std::endl;
    Client(); //서버에서 클라이언트를 호출 해당 함수를 콜백함수라고함 
}

/// 클라이언트 /////////////
void Client()
{
    std::cout << "client call" << std::endl;
}


int main()
{
    PrintHello();
    
    return 0;
}

//클라이언트가 서버를 호춯하면 call 이라하고 서버가 클라이언트를 호출하면 callback이라고 한다.
//그런데 위에 처럼 콜백 메커니즘은 절대 저렇게 구현될수가 없다.
//왜냐면 서버는 클라이언트의 존재를 모르기 때문이다. -> 즉 클라이언트가 서버를 호출할때 정보를 제공해주어야한다
//정보제공 방법 중 하나가 함수포인터 매개 변수를 이용하는것 그외에 함수 객체, 대리자 , 전략 패턴 

