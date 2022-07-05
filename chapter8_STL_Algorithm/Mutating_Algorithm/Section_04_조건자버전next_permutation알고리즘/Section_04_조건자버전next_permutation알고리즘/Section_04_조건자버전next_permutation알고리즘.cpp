// Section_04_조건자버전next_permutation알고리즘.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>

class Point
{
private:
	int x, y;
public:
	explicit Point(int _x = 0,int _y = 0) : x(_x),y(_y) { }
	int GetX() const { return x; }
	int GetY() const { return y; }
};

std::ostream& operator<<(std::ostream& out, const Point& arg)
{
	std::cout << "(" << arg.GetX() << ", " << arg.GetY() << ")";
	return out;
}

bool Pred(const Point& left, const Point& right)
{
	return left.GetY() > right.GetY();
}

//next_permutation을 사용할 때는 몇 가지 주의할 점이 있습니다.
//
//1.오름차순으로 정렬된 값을 가진 컨테이너로만 사용가능합니다.
//2.default로 operator < 를 사용해 순열을 생성합니다.즉 오름차순으로 순열을 생성합니다.
//3.중복이 있는 원소들은 중복을 제외하고 순열을 만들어줍니다.
//
//	3번의 예시를 들자면{ 0, 0, 1 }과 같은 배열의 순열을 구한다면 중복을 제외한
//{ 0, 0, 1 }, { 0, 1, 0 }, { 1, 0, 0 }이 됩니다.이를 이용해 조합(Combination)을 구할 수 있습니다.

/*
조합(Combination) 구하기
 
배열 s의 n개의 원소 중에서 r개의 원소를 택하는 방법은 다음과 같습니다. 
 

우선 크기가 n인 배열 temp를 만들어 r개의 원소는 1로, (n-r)개의 원소는 0으로 초기화합니다. 
1.temp의 모든 순열을 구합니다. 
2.temp의 순열에서 원소값이 1인 인덱스만 배열 s에서 가져옵니다. 

temp에서 1이 있는 자리의 원소는 포함하고 0이 있는 자리의 원소는 미포함한다고 생각하면 쉽습니다. 
이때 next_permutaion을 사용하면 오름차순으로 정렬되기 때문에, 조합은 내림차순으로 출력됩니다. 
하지만 prev_permutation을 쓰면 모든 조합의 경우의 수를 오름차순으로 출력 가능합니다. 
 
※ prev_permutation은 내림차순 정렬된 데이터를 받아서 이전 순열로 바꿔줍니다. 
*/

int main()
{
	
	std::vector<Point> vec;
	vec.emplace_back(Point(5, 1));
	vec.emplace_back(Point(7, 2));
	vec.emplace_back(Point(5, 3));

	std::cout << "v: " << vec[0] << " " << vec[1] << " " << vec[2] << std::endl;
	std::cout << std::prev_permutation(vec.begin(), vec.end(),Pred) << std::endl;
	std::cout << "v: " << vec[0] << " " << vec[1] << " " << vec[2] << std::endl;
	std::cout << std::prev_permutation(vec.begin(), vec.end(), Pred) << std::endl;
	std::cout << "v: " << vec[0] << " " << vec[1] << " " << vec[2] << std::endl;
	std::cout << std::prev_permutation(vec.begin(), vec.end(), Pred) << std::endl;
	std::cout << "v: " << vec[0] << " " << vec[1] << " " << vec[2] << std::endl;
	std::cout << std::prev_permutation(vec.begin(), vec.end(), Pred) << std::endl;
	std::cout << "v: " << vec[0] << " " << vec[1] << " " << vec[2] << std::endl;
	std::cout << std::prev_permutation(vec.begin(), vec.end(), Pred) << std::endl;

	//마지막
	std::cout << "v: " << vec[0] << " " << vec[1] << " " << vec[2] << std::endl;
	std::cout << std::prev_permutation(vec.begin(), vec.end(), Pred) << std::endl;
	std::cout << "v: " << vec[0] << " " << vec[1] << " " << vec[2] << std::endl;

	return 0;
}

