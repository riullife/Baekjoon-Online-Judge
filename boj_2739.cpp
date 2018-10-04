#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=9;i++){
        int result;
        result=n*i;
        printf("%d * %d = %d",n,i,result);
        cout<<endl;
    }
}