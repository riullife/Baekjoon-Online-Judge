/*
벌집
                        방의 범위       방의 개수
지나치는 방의 개수: 1 :   1                 1
                  2 :   2~7               6
                  3 :   8~19              12
                  4 :   20~37             18
                  x :                     6*x(6배수)



*/

#include<iostream>
using namespace std;
int main()
{
  int n;//방 번호
  cin>>n;
  int cnt=1; int max=1; int tmp=1;
  while(tmp++<n)
  {
    if(tmp>max)
    {
      max += 6*(cnt++);
    }
  }
  cout<<cnt;
}
