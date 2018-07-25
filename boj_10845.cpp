#include<iostream>
#include<string>
#include<queue>
using namespace std;
int main()
{
  int n;//명령어의 개수
  string s;//명령어
  queue<int> q;
  int num;
  cin>>n;
  while(n--)
  {
    cin>>s;

    if(s=="push"){
      int x;
      cin>>x;
      q.push(x);
    }

    if(s=="pop"){
      if(q.size()==0) cout<<-1<<endl;
      else{
        int num=q.front();
        q.pop();
        cout<<num<<endl;
      }
    }

    if(s=="size"){
      cout<<q.size()<<endl;
    }

    if(s=="empty"){
      if(q.size()==0)cout<<1<<endl;
      else cout<<0<<endl;
    }

    if(s=="front"){
      if(q.size()==0)cout<<-1<<endl;
      else cout<<q.front()<<endl;
    }

    if(s=="back"){
      if(q.size()==0)cout<<-1<<endl;
      else cout<< q.back()<<endl;
    }

  }
  return 0;
}
