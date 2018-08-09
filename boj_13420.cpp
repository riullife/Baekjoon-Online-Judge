#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int t;
  long long a,b,c;
  char op1,op2;
  cin>>t;
  for(int i=0;i<t;i++){
    cin>>a>>op1>>b>>op2>>c;
    if(op1=='+'){
      if(a+b==c)cout<<"correct"<<endl;
      else cout<<"wrong answer"<<endl;
    }
    else if(op1=='-'){
      if(a-b==c) cout<<"correct"<<endl;
      else cout<<"wrong answer"<<endl;
    }
    else if(op1=='*'){
      if(a*b==c) cout<<"correct"<<endl;
      else cout<<"wrong answer"<<endl;
    }
    else if(op1=='/'){
      if(a/b==c)cout<<"correct"<<endl;
      else cout<<"wrong answer"<<endl;
    }
  }
  return 0;
}
