//알파벳 찾기
/*
  find()함수, 아스키코드 사용
*/
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int index;
  for(int i=97;i<=122;i++){
    index = s.find(i);
    cout<< index << " ";
  }

}
