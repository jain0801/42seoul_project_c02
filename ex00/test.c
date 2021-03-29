#include<stdio.h>
#include<string.h>

int main(void)
{
	char s1[] = "hello world!!";
	char s2[] = "world!";
	//printf("pass");
	strcpy(s1, s2);
	//printf("pass");
	printf("%s\n",s1);
	return 0;
}
