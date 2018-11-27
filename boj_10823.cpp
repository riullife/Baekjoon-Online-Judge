#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char str[10000];
int main()
{ 
    int sum=0;
    int num;
    char s[10000]; 
    while(scanf("%s",s)!=EOF){ 
        strcat(str, s); 
    }
    char *result = strtok(str,",");
    while(result!=NULL){
            num = atoi(result);
            sum+=num;
            result = strtok(NULL,",");
    }
    printf("%d",sum);
}
