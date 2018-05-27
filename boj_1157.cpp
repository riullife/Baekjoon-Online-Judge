#include<iostream>
#include<string>
using namespace std;

int main()
{

	int arr[26] = {0};//알파벳 개수가 26개 이므로,
	string s;
	char answer;
	int max = 0;//초기 최댓값
	getline(cin, s);
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= 65 && s[i] <= 90)
			arr[s[i] - 65] += 1;//소문자 검사
		else if (s[i] >= 97 && s[i] <= 122)
			arr[s[i] - 97] += 1;//대문자 검사
	}

	for (int i = 0; i < 26; i++)
	{
		if (arr[i] > max)
		{
			answer = i + 65;
			max = arr[i];
		}
		else if (arr[i] == max)
		{
			answer = '?';
		}

	}
	cout << answer << endl;
	return 0;
}
