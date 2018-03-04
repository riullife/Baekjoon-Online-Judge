#include<stdio.h>

int main()
{
	char str;

	str=getchar();
	while (str!=EOF) {
	    putchar(str);
        str=getchar();
	}
	return 0;
}
