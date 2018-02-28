#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main()
{
	int n;
	cin >> n;

	string str;//명령어 문자열
	stack<int> st;// int타입 스택 

	for (int i = 0; i < n; i++)
	{
		cin >> str; 
		if (str == "push")
		{
			int x; 
			cin >> x;
			st.push(x);
		}
		else if (str == "pop")
		{
			if (st.empty())
			{
				cout << "-1" << endl;
			}
			else {
				cout << st.top() << endl;
				st.pop();
			}
		}
		else if (str == "top")
		{
			if (st.empty())
			{
				cout << "-1" << endl;
			}
			else {
				cout << st.top() << endl;
			}
		}
		else if (str == "empty")
		{
			cout << st.empty() << endl;
		}
		else
		{
			cout << st.size() << endl;
		}
	}
	return 0;
}