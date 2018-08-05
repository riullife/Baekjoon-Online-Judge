#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

struct sub{
  int kor;
  int math;
  int eng;
  string name;
};
bool cmp(const sub &p1, const sub &p2){
  if(p1.kor!=p2.kor)return p1.kor > p2.kor;
  else if(p1.kor==p2.kor){
    if(p1.eng<p2.eng)return true;
    else if(p1.eng==p2.eng){
      if(p1.math>p2.math)return true;
      else if(p1.math==p2.math)return p1.name<p2.name;
    }
  }
  return false;
}
int main()
{
  int n;
  cin>>n;
  vector<sub> v(n);
  for(int i=0;i<n;i++){
    cin>>v[i].name>>v[i].kor>>v[i].eng>>v[i].math;

  }
  stable_sort(v.begin(),v.end(),cmp);
  for(int i=0;i<n;i++){
    cout<<v[i].name<<'\n';
  }
}
