// Sectopn_01_key_comp(),value_comp().cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <set>

int main()
{
	std::set<int, std::less<int>> s_less;
	std::set<int, std::greater<int>> s_greater;
	
	s_less.insert(50);
	s_less.insert(80);
	s_less.insert(40);

	s_greater.insert(50);
	s_greater.insert(80);
	s_greater.insert(40);
	
	std::set<int, std::less<int>>::key_compare l_cmp = s_less.key_comp();
	std::cout << l_cmp(10, 20) << std::endl;

	std::set<int, std::greater<int>>::key_compare g_cmp = s_greater.key_comp();
	std::cout << g_cmp(10, 20) << std::endl;

	std::cout << "key_compare type: "
		<< typeid(s_less.key_comp()).name() << std::endl;
	std::cout << "key_compare type: "
		<< typeid(s_greater.key_comp()).name() << std::endl;
	std::cout << "value_compare type: "
		<< typeid(s_less.value_comp()).name() << std::endl;
	std::cout << "value_compare type: "
		<< typeid(s_greater.value_comp()).name() << std::endl;

	return 0;
}

