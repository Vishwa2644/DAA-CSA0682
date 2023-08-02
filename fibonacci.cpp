#include<stdio.h>
void printfabonacci(int n){
	static int n1=0,n2=1,n3;
	if(n>0)
	{
	
	n3=n1+n2;
	n1=n2;
	n2=n3;
	printf("fibonacci:",n3);
	printfabonacci(n-1);
}
}
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);
	printf("fabonacci:");
	printf("%d %d",0,1);
	printfabonacci(n-2);
	return 0;
}
