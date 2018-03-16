#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
	string str;
	vector<pair<int, string>> word;
	int n;
	
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> str;
		word.push_back(pair<int,string>(str.length(), str));

	}
	sort(word.begin(), word.end());
	
	for (int i = 0; i < n; i++)
	{
		if (i > 0)
		{
			if (word[i].second.compare(word[i - 1].second) == 0) continue;
		}
		cout << word[i].second << '\n';
	}
}

