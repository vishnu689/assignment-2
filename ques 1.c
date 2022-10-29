#include<stdio.h>
int main()
{
	int x,u;
	printf("Enter any number : ");
	scanf("%d",&x);
	u=x%10;
	printf("unit digit of %d is %d",x,u);
	return 0;
}
