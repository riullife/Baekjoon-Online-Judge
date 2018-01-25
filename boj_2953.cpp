#include <iostream>
using namespace std;

int main()
{
	int score[5][4]; //5x4배열 선언
	int sum[5] = { 0,0,0,0,0 };
	int scoreSum = 0; 
	int playerNum;

	for (int i = 0; i<5; i++)
	{
		for (int j = 0; j < 4; j++)
		{

			cin >> score[i][j];
			sum[i] += score[i][j];
		}
	}

	for (int i = 0; i < 5; i++)
	{
		if (scoreSum < sum[i])
		{
			scoreSum = sum[i];
			playerNum = i + 1;
		}
	}
	cout << playerNum << ' ' << scoreSum << '\n';

}
