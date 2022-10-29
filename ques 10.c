#include<stdio.h>
int main()
{
	int x,y,sum;
	printf("Enter a three digit no and a one digit no :\n");
	scanf("%d %d",&x,&y);
	sum=x%10*10+y;
	x=x/10;
	sum=x%10*100+sum;
	x=x/10;
	sum=x%10*1000+sum;
	printf("required no is %d",sum);
	return 0;
}
