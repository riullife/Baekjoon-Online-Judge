#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int t;
	cin >> t;


	for (int i = 0; i < t; i++)
	{
		char OX[100] = { 0 };
		cin >> OX;

		int sum = 0;
		int cnt = 0;
		for (int j = 0; j < strlen(OX); j++)
		{
			if (OX[j] == 'X')
			{
				cnt = 0;
			}

			else
			{
				cnt++;

			}
			sum += cnt;
		}

		cout << sum << endl;

	}

}
