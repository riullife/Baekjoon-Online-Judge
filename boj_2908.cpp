/*
두 수 a,b입력-> 숫자 거꾸로 바꾸기-> 대소비교-> 더 큰 수 출력
*/
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  string a,b;
  cin>>a>>b;
  //문자열 뒤집기
  reverse(a.begin(),a.end());
  reverse(b.begin(),b.end());
  //string -> int
  int aVal,bVal;
  aVal=stoi(a);
  bVal=stoi(b);
  //대소비교
  if(aVal>bVal) cout<< aVal << endl;
  if(aVal<bVal) cout<< bVal << endl;
}
