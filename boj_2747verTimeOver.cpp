#include<iostream>
using namespace std;
int f(int n)
{
  if(n==0)return 0;
  else if(n==1)return 1;
  else return f(n-1)+f(n-2);
}
int main()
{
  int n;
  cin>>n;
  cout << f(n) << endl;
}
