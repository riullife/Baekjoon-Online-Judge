#include<iostream>
#include<deque>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;

    deque<int> dq;
    int x;

    while(n--)
    {
        string s;
        cin>>s;

        if(s=="push_front"){
            cin>>x;
            dq.push_front(x);
        }
        if(s=="push_back"){
            cin>>x;
            dq.push_back(x);
        }
        if(s=="pop_front"){
            if(!dq.empty()){
                x=dq.front();
                dq.pop_front();
                cout<<x<<endl;
            }
            else cout<<"-1"<<endl;
        }
        if(s=="pop_back"){
            if(!dq.empty()){
                x=dq.back();
                dq.pop_back();
                cout<<x<<endl;
            }
            else cout<<"-1"<<endl;
        }
        if(s=="size") cout<< dq.size() <<endl;
        if(s=="empty"){
            if(!dq.empty())cout<<"0"<<endl;
            else cout<<"1"<<endl;
        }
        if(s=="front"){
            if(!dq.empty()){
                cout<<dq.front()<<endl;
            }
            else cout<<"-1"<<endl;
        }
        if(s=="back"){
            if(!dq.empty()){
                cout<<dq.back()<<endl;
            }
            else cout<<"-1"<<endl;
        }
    
    }
}