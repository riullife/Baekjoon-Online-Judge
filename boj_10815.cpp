#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
  int n;
  cin>>n;

  vector<int> vn;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    vn.push_back(x);
  }
  sort(vn.begin(),vn.end());
  int m;
  cin>>m;

  for(int i=0;i<m;i++)
  {
    int x;
    cin>>x;
    cout<<binary_search(vn.begin(),vn.end(),x);
  }

}
