#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int x;
	vector<int> v;
	for (int i=0;i<n;i++)
	{
		cin >> x;
		if (x == 0) {
			if (v.size() == 0) cout << 0 << endl;
			else {
				auto it = min_element(v.begin(), v.end());
				cout << *it << endl;
				v.erase(it);
			}
		}
		else v.push_back(x);
	}
}
