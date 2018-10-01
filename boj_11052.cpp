#include<iostream>
using namespace std;
int p[10001];

int main()
{
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    cin>>p[i];
    for(int j=1;j<=i;j++)
    {

      if (p[j] + p[i - j] > p[i])
                p[i] = p[j] + p[i - j];
    }



  }
  cout<<p[n]<<endl;
  return 0;
}
