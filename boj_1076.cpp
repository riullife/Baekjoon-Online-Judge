#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main()
{
  string resistant[]={"black","brown","red","orange","yellow","green","blue","violet","grey","white"};
  string a,b,c;
  long long result=0;
  cin>>a>>b>>c;
  for(int i=0;i<10;i++){
    if(a==resistant[i])result+=i*10;
    if(b==resistant[i])result+=i;
  }
for(int i=0;i<10;i++){
  if(c==resistant[i]){
  	for(int j=0;j<i;j++){
  		result*=10;
	  }
  }
}

  cout<<result<<endl;
}
