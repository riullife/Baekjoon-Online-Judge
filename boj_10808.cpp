#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin >> s;

	int arr[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int cnt[26] = {0};
	for (int i = 0;i < s.length();i++) {
		for (int j = 0;j < 26;j++)
		{
			if (s[i] == arr[j])cnt[j] += 1;
			else cnt[j] += 0;

		}
	}
	for (int i = 0;i < 26;i++)
	{
		cout << cnt[i] << ' ';
	}
}
