#include<iostream>
#include<string>
using namespace std;

//17037300
int main()
{
  int a,b,c;
  cin>>a>>b>>c;

  int val = a*b*c;
  string strVal= to_string(val);//a,b,c의 곱을 string형으로 변환
  int check[10]={0,0,0,0,0,0,0,0,0,0};//숫자가 나온 횟수 체크
  string num = {'0','1','2','3','4','5','6','7','8','9'};//해당 숫자가 나온지 비교

  for(int i=0;i<strVal.length();i++)//숫자 길이만큼
  {
    for(int j=0;j<10;j++)//0~9까지
    {
      if(strVal[i]==num[j])
      {
        check[j]=check[j]+1;
      }
    }

  }
  for(int i=0;i<10;i++)
  {
    cout<<check[i]<<endl;
  }
  

}
