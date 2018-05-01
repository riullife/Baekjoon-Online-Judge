#include<iostream>
using namespace std;

int x;
int length = 64;
int count = 0;

int main()
{
    cin >> x;
while(x>0)
  {
    if(length>x) length /= 2;
    else{
      x -= length;
      count++;
    }
  }
  cout << count ;
}
