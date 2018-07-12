/*
<점수계산>
예제
채점 결과 : 1 0 1 1 1 0 0 1 1 0
점수:      1+0+1+2+3+0+0+1+2+0
          =10
jdge: 채점결과
sum: 점수 합계
score: 점수
}
*/
#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int jdge[100];
  int sum=0;
  int score=1;
  for(int i=0;i<n;i++)
  {
      cin>>jdge[i];
  }
  for(int i=0;i<n;i++)
  {
    if(jdge[i]==1)
    {
      sum+=score;
      score++;
    }
    else score=1;
  }
  cout<<sum<<endl;
  return 0;
}
