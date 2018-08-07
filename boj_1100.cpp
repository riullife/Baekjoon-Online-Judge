#include<iostream>
using namespace std;
int main()
{
  char chess[8][8];
  int cnt=0;

  for(int i=0;i<8;i++)
  {
    for(int j=0;j<8;j++)
    {
      cin>>chess[i][j];
      if(chess[i][j]=='F')//하얀 말 F가 있을 때
      {
        if(i%2==1&&j%2==1)cnt++;
        else if(i%2==0&&j%2==0)cnt++;
      }
    }
  }
  cout<<cnt<<endl;
}
/*
WBWBWBWB
BWBWBWBW
WBWBWBWB
BWBWBWBW
WBWBWBWB
BWBWBWBW
WBWBWBWB
BWBWBWBW

흰색은 (0,0) (0,2) (0,4) ... (0,i%2==0)
      (1,i%2==1)
      (2,i%2==0)
      따라서 x,y 좌표가 둘다 홀수거나 둘다 짝수거나
      이때 카운트 시켜준다.
*/
