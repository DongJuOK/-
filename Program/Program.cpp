#include <iostream>

using namespace std;

class Vector2
{
private:
	int x;
	int y;

public:
	Vector2(int x, int y)
	{
		this->x = x;
		this->y = y;
	}

	Vector2 operator + (const Vector2 & clone)
	{
		return Vector2(X() + clone.x, Y() + clone.y);
	}

	const int & X() { return x;}

	const int & Y() { return y;}
};

int main()
{
#pragma region 연산자 오버로딩

	Vector2 direction1(1, 1);
	Vector2 direction2(5, 5);

	Vector2 direction = direction1 + direction2;

#pragma endregion


	return 0;
}
