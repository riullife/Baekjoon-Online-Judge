#include<iostream>
using namespace std;
  //1로 만들기
  //d[n]은 연산을 사용하는 횟수의 최솟값
  /*
  d[1]=0
  d[2]=1 (2->1)
  d[3]=1 (3->1)
  d[4]=2 (4->2->1) = d[2]+1
  d[5]=3 (5->4->2->1) = d[4]+1
  d[6]=2 (6->3->1) = d[3]+1
  d[7]=3 (7->6->3->1) = d[6]+1
  d[8]=3 (8->4->2->1) = d[4]+1
  d[9]=2(9->3->1)     = d[3]+1
  d[10]=4(10->5->4->2->1) = d[5]+1

  따라서 X%2==0 일 때 d[n] = d[n/2]+1
        X%3==0 일 때 d[n] = d[n/3]+1
        X가 2의 배수 또는 3의 배수가 아닐 때 d[n] = d[n-1]+1
  */
  #include<iostream>
  using namespace std;

  int d[10];

  int makeOne(int x)
  {
  	if (x == 1)return 0;
  	for (int i = 2; i <= x; i++)
  	{
  		d[i] = d[i - 1] + 1;


  		if (i % 2 == 0)
  		{
  			int t = d[i / 2] + 1;
  			if (t < d[i]) d[i] = t;
  		}

  		if (i % 3 == 0)
  		{
  			int t = d[i / 3] + 1;
  			if (t < d[i]) d[i] = t;
  		}
  	}
  	return d[x];
  }
  int main()
  {
  	int x;
  	cin >> x;
  	makeOne(x);
  	cout << d[x];
  }
