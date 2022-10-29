#include<stdio.h>
int main()
{
	int x,rem,sum=0;
	printf("Enter any three digit number: ");
	scanf("%d",&x);	
	rem=x%10;
	x=x/10;
	sum=sum+rem;
	rem=x%10;
	x=x/10;
	sum=sum+rem;
	sum=sum+x%10;
	printf("sum is %d",sum);
	return 0;
}
