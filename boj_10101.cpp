#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
    cin >> a >> b >> c;
	if (a == b&& b == c && c== 60)

	{
		cout << "Equilateral";
	}
	else if (a + b + c == 180)
	{
		if ((a == b) || (b == c) || (c == a))
		{
			cout << "Isosceles";
		}
		else
		{
			cout << "Scalene";
		}
	}
	else
	{
		cout << "Error";
	}
}