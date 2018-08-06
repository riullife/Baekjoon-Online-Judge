#include<iostream>
using namespace std;
int main()
{
    int []arr=new int[]
    int sum=0;
    int cmp=0;
    cin>>arr;
    for(int i=0;i<len;i++)
    {
        sum+=arr[i];
        cmp+=i;
    }
    if(sum!=cmp)return true;
    else return false;
}
