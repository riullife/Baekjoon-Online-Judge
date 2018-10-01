#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int result;
    while(cin>>a>>b){
        result=a+b;
        if(result==0) break;
        else cout<<result<<endl;
    }
    return 0;
}
