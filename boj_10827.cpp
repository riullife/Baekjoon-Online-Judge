#include<iostream>
#include<set>//중복없는 정렬을 위해서
using namespace std;
int main()
{
  int n;
  cin>>n;
  //set
  set<int> s;
  int x;
  for(int i=0;i<n;i++)
  {
    cin>>x;
    s.insert(x);
  }
  for(auto it=s.begin();it!=s.end();it++)
  {
    cout<<*it<<endl;
  }
}
