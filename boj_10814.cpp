#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct account{
    int age;
    string name;
};
bool cmp(const account &s1,const account &s2){
  return (s1.age < s2.age);
}
int main()
{
  int n;
  cin>>n;
  vector<account> a(n);
  for(int i=0;i<n;i++){
    cin>>a[i].age;
    cin>>a[i].name;
  }
  stable_sort(a.begin(),a.end(),cmp);
  for(int i=0;i<n;i++){
    cout<<a[i].age<<' '<<a[i].name<<'\n';
  }
}
