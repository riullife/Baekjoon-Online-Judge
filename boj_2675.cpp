#include<iostream>
using namespace std;

string nligy(string s, int r)
{
	string result = "";
	for(int i=0;i<s.length();i++)
	{
		for (int j = 0; j < r; j++)
		{
			result += s[i];
		}
	}
	return result;
}
int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int r;
		cin >> r;
		string s;
		cin >> s;

		cout << nligy(s,r) << endl;
	}
	return 0;
}
