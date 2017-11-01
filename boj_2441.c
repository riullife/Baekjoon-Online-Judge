#include <stdio.h>
int main(void){

    int N;
    int i,j,k;
    scanf ("%d",&N);//N을 입력받는다.

    for (i=1;i<=N;i++)//줄의 수
    {
        for(k=1;k<i;k++)
        printf(" ");//띄어쓰기 출력,첫줄은 띄어쓰기가 없으므로 k<i

        for(j=N;j>=i;j--)
            printf("*");//별 출력

        printf("\n");//한줄 출력이 끝나면 줄을 바꿔준다. 
    }

        return 0;
}