#include<iostream>
using namespace std;
int main()
{
  int n,student,apple;
  int cnt=0;
  int sum=0;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>student;
    cin>>apple;
    cnt=apple%student;
    sum+=cnt;
  }
  cout<<sum<<endl;
}
