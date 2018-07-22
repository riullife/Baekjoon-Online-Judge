#include<iostream>
using namespace std;
int main()
{
	int n;//정수의 개수
	int arr[100];
	int v;//찾으려 하는 정수
	int cnt = 0;

	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> arr[i];

	}
	cin >> v;
	for (int i = 0;i < n;i++)
	{
		if (arr[i] == v)cnt++;
	}
	cout << cnt << endl;
	
}
