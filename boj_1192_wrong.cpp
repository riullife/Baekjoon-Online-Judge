#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int a[100000];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }

  int dp[100000];
  for(int i=0;i<n;i++)
  {
    dp[i]=a[i];
    if(i==0)continue;
    if(dp[i]<dp[i]+a[i]) dp[i]=dp[i]+a[i];
  }

    int ans =dp[0];
    for(int i=1;i<n;i++)
    {
      if(ans<dp[i])
      ans=dp[i];
    }

    cout<<ans<<'\n';

}

//왜 계속 42가 나오지?
