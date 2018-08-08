#include<iostream>
#include<stack>
#include<string>
using namespace std;

int cnt=0;
bool cut(string s)
{
  stack<char> st;
  char c;
  for(int i=0;i<s.length();i++){
    c=s[i];
    if(c=='('){
      st.push(c);
    }

    else{
        st.pop();
        if(s[i-1]=='('){
        	cnt+=st.size();
		}
		else cnt+=1;
      }
  }
  return cnt;
}
int main()
{
  string s;
  cin>>s;
  cut(s);
  cout<<cnt<<endl;
}
