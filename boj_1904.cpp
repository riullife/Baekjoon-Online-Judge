//01타일, 00 또는 1을 붙여 만든 타일의 조합의 개수
/*
dp[n]은 n개의 타일이 주어졌을 때 2진수열의 개수

n=1일 때 dp[1]=1 {1}
n=2일 때 dp[2]=2 {1,1},{00}
n=3일 때 dp[3]=3 {1,1,1},{1,00},{00,1}
n=4일 때 dp[4]=5 {1,1,00},{1,00,1},{00,00},{00,11},{1,1,1,1}
n=5일 때 dp[5]=8 {00,00,1},{1,00,00},{00,1,00},{1,1,1,00},{00,1,1,1},{1,1,1,1,1},{1,1,00,1},{1,00,1,1}

따라서 dp[n]=dp[n-1]+dp[n-2]
*/

#include<iostream>
using namespace std;

int dp[1000000];

int main()
{

    dp[0]=0;
    dp[1]=1;
    dp[2]=2;

    for(int n=3;n<=1000000;n++)
    {
        dp[n]=(dp[n-1]+dp[n-2])%15746;
    }
      int n;
      cin >> n;
      cout << dp[n];

}
