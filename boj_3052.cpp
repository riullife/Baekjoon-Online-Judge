#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int num;
    int arr[10];
    int p;
    int dif=0;
	for(int i=0;i<10;i++){
	   cin>>num;
	   arr[i]=num%42;
    }
	sort(arr,arr+10);
	for(int i=0;i<10;i++)
	    if(arr[i]!=arr[i+1])dif++;

	cout<<dif<<endl;
}
