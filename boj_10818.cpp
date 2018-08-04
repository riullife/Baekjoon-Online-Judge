#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int x;
  vector<int> v;
  for(int i=0;i<n;i++)
  {
    cin>>x;
    v.push_back(x);
  }
    int min = *min_element(v.begin(),v.end());
    int max = *max_element(v.begin(),v.end());
    cout<<min<<' '<<max<<'\n';
}
