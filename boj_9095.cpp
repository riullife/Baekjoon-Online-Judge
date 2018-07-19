/*
<1,2,3 더하기>
d[n]은 정수 n을 1,2,3 으로 더하는 개수

d[1]=1 -> 1개
d[2]= 1+1 -> 2개
d[3]= 1+1+1
    = 1+2
    = 2+1
    = 3 -> 4개
d[4]=1+1+1+1
    =1+1+2
    =1+2+1
    =2+1+1
    =2+2
    =3+1
    =1+3  -> 7개
d[5]=1+1+1+1+1
    =1+1+1+2
    =1+1+2+1
    =1+2+1+1
    =2+1+1+1
    =2+2+1
    =2+1+2
    =1+2+2
    =3+1+1
    =1+3+1
    =1+1+3
    =3+2
    =2+3 ->13개

    따라서 d[n]=d[n-1]+d[n-2]+d[n-3]
    d[1]=1 d[2]=2 d[3]=4
*/
//bottom-up방식
#include<iostream>
using namespace std;
int d[10];
int PL(int n)
{
  d[1]=1;
  d[2]=2;
  d[3]=4;
  for(int i=4;i<=n;i++)
    d[i]=d[i-1]+d[i-2]+d[i-3];
  return d[n];
}
int main()
{
  int t,n;
  cin>>t;
  for(int j=0;j<t;j++)
  {
    cin>>n;
    PL(n);
    cout<<d[n]<<endl;
  }
}
