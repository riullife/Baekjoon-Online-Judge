#include<iostream>
using namespace std;
double d[1000000];

int main()
{
    int n;
    cin>>n;
    
    d[0]=0;
    d[1]=1;
    
     for(int i=2;i<=n;i++){
        for(int j=1;j<=6;j++){
            if(i>=j) d[i]+=(1.0/6.0)*(1+d[i-j]);
            else d[i] += 1.0/6.0;
        }
    }

    cout.precision(16); 
    cout<<d[n]<<endl;
    
}
/*

<주사위 게임>
--------------------------------------------------------------------------
각 주사위를 던졌을 때 각 눈의 값이 나올 확률은 1/6 이고, 주사위값의 기대값은
각 눈의 값에 그 확률을 더한 값인
1*(1/6)+2*(1/6)+3*(1/6)+4*(1/6)+5*(1/6)+6*(1/6) **<위키백과 참고>
---------------------------------------------------------------------------
그러므로 문제의 기댓값을 얻기 위해 각 눈의 값이 나올 확률인 1/6을 곱해야 한다.

d[n]은 사탕을 적어도 n개를 받기 위해 주사위를 던져야 하는 횟수의 기댓값
따라서 사탕을 적어도 n개(n개 이상) 받기 위해서 주사위를 던졌을 때 나온 값이 i라고 한다면
1.n>=i
    맨 처음에 n을 굴리고
    n-1,n-2,n-3...n-6을 더 굴려야되므로
    d[n]= (1/6)*(d[n-1]+d[n-2]+d[i-3]+d[n-4]+d[n-5]+d[n-6])
    
2.n<i
    주사위를 더 던질 필요가 없으므로 
    d[i] = 1/6


*/
