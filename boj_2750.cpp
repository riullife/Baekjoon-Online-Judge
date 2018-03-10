#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

	int main(void)
	{
		int n,num;
		cin >> n;

		vector<int> arr;
		for(int i=0;i<n;i++)
		{
			cin >> num;
			arr.push_back(num);
		}
		sort(arr.begin(),arr.end());

		for(int i=0;i<n;i++)
		{
			cout << arr[i]<<endl;
		}
	}
