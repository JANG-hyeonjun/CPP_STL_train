// Case_std_move.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <string>

class animal
{
public:
	void setName(std::string name)
	{
		mName = std::move(name);
	}

private:
	std::string mName = "";
};

int main()
{
	int&& c = 2;
	int b = std::move(c);
	
	std::string&& A = "code";
	std::string B = std::move(A);

	std::cout << typeid(A).name() << std::endl;
	std::cout << typeid(B).name() << std::endl;

	std::cout << B << std::endl;
	std::cout << A << std::endl;
	
	/*c = std::move(a);
	std::cout << typeid(a).name() << std::endl;
	std::cout << typeid(c).name() << std::endl;
	std::cout << typeid(b).name() << std::endl;
	
	std::cout << a << std::endl;*/
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	//&&은 R-value reference &은 L-value reference 이다.
	//std::move()라는것은 해당 객체의 이동이다. 즉 c를 b로 이동 시키고 L-value를 R-value로 
	//변경하는것이다. 그리고 그럼으로써 Resource Ownership을 다른 객체에게 넘겨주는것 
	//더 상세 하게는 전달된 파라미터를 rvalue 참조로 캐스팅한 후 return 하는 함수 
	
	//move sementic을 효율적으로 즉 L_R value가 모두 사용되게 하려면 
	animal cat;
	std::string s = "kitty";
	cat.setName(s); //copy - 1 //value가 copy되고 소유권 m_Name에게 넘어감
	std::cout << "name:" << s << std::endl;
	cat.setName("nabi"); // copy - 0 -> copy elision이란것을 내부적으로 진행 
	//copy elision이란 최적화 기법중 하나 컴파일러는 이미 넘어오는 값이 R-value를 알기에 
	//임시로 어딘가 nabi를 써어놓고 복사하는것이아니라 name이 가리키는 곳에 적어주는것 

	//옵티마이제이션은 resource(heap memory data)가 copy가 아닌 이동이 가능하게 만들어줌.
	return 0;
}

