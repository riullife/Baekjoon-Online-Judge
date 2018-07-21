//<주식투자>
#include<iostream>
using namespace std;
int main()
{
  int t,n;
  int profit;
  int max=0;
  int maxProfit=0;
  cin>>t;
  for(int i=0;i<t;i++)//테스트 케이스먄큼 n입력
  {
    cin>>n;
    for(int j=0;j<n;j++)//데이터의 일수만큼 a,b,c입력
    {
      for(int k=0;k<3;k++)
      {
        cin>>profit;
        if(profit>max) max=profit; //a,b,c중 최대값 구하기
      }
      maxProfit+=max; //날짜별 데이터의 최대 이익을 더함
      max=0;//다음 테스트케이스를 위해 max값 초기화
    }
    cout<<maxProfit<<endl;
    maxProfit=0; //초기화
  }
}
