#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(const pair<int,int> &p1, const pair<int,int> &p2){
  if(p1.second!=p2.second) return p1.second<p2.second;
  return p1.first<p2.first;
}
int main()
{
  int n;
  cin>>n;
  vector <pair<int,int>> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i].first;
    cin>>v[i].second;
  }
  sort(v.begin(),v.end(),cmp);
  for(int i=0;i<n;i++){
    cout<<v[i].first<<v[i].second<<'\n';
  }
}
