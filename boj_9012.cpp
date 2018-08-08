#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool check(string s)
{
  stack<char> st;
  char c;
  for(int i=0;i<s.length();i++){

  	char c=s[i];

    if(c=='('){
      st.push(c);
    }
    else{
      if(st.size()!=0){
        st.pop();
      }
      else return false;
    }
  }
  return st.empty();
}
int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    string s;
    cin>>s;
    if(check(s)){
      cout<<"YES"<<endl;
    }
    else {
	cout<<"NO"<<endl;
  	}
  }
  return 0;
}
