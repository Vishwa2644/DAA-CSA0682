#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	printf("enter the string:");
	scanf("%s",&str);
	printf("the reversed value %s:",strrev(str));
}
