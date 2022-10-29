#include<stdio.h>
int main()
{
	int x,rem;
	printf("Enter any three digit number : ");
	scanf("%d",&x);
	rem=x%10;
	x=x/10;
	x=rem*100+x;
	printf("required no is %d",x);
	return 0;
}
