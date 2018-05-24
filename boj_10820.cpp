#include<iostream>
#include<string>
#include<cstdio>
#include<cctype>
using namespace std;

int main()
{

  string s;

  while(getline(cin,s))
  {
    int arr[4]={0,0,0,0};

      for(int i=0;i<s.size();i++)
      {
        if ('a' <= s[i] && s[i] <= 'z')
                arr[0]++;
            else if ('A' <= s[i] && s[i] <= 'Z')
                arr[1]++;
            else if ('0' <= s[i] && s[i] <= '9')
                arr[2]++;
            else if (s[i]==' ')
                arr[3]++;
      }
      for(int i=0;i<4;i++)
      {
        cout<<arr[i]<<' ';
      }
  }

}
