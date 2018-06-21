//이친수
/*
d[n]은 n자리 이친수의 개수
 n=1:1 ->  1개

 n=2:  10 -> 1개

 n=3:  100
       101 -> 2개

 n=4:  1000
       1001
       1010 ->3개

 n=5 : 10001
       10000
       10010
       10100
       10101 -> 5개

       따라서 d[n]=d[n-1]+d[n-2];


*/
#include<iostream>
using namespace std;

int main()
{
  long long int n;
  cin>>n;
  long long int d[91]={};
  d[0]=0;
  d[1]=1;
  for(int i=2;i<=n;i++)
  {
    d[i]=d[i-1]+d[i-2];

  }
  cout<<d[n]<<endl;

}
