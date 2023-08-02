#include<stdio.h>
#include<string.h>
int main(){
	int i,l;
	char a[50],b[50];
	printf("enter the string:");
	scanf("%s",&a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		b[i]=a[i];
	}
	printf("copied str:%s",b);
}
