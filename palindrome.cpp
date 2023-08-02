#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[50];
	int i,j,len,chk=0;
	printf("enter the string:");
	scanf("%s",&str);
	len=strlen(str);
	for(i=0,j=(len-1);i<=(len-1);i++,j--)
	{
		if(str[i]!=str[j])
		chk=1;
		break;
		}
		if(chk==1) 
		printf("not palindrome");
		else
		printf("palindrome");

}
