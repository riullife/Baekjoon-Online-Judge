#include<iostream>
using namespace std;
int main()
{
  int scr[5];
  int sum=0;
  for(int i=0;i<5;i++)
  {
    cin>>scr[i];
    if(scr[i]<40) scr[i]=40;
    sum+=scr[i];
  }
  cout<<sum/5<<endl;
}
