#include<iostream>
using namespace std;
int main()
{
  string s;
  cin>>s;
  for(int i=0;i<s.length();i++){
    if(s[i]-3<65){
      s[i]=s[i]+26-3;
    }
    else s[i]=s[i]-3;
  }
  cout<<s<<endl;
}
