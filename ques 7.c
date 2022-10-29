#include<stdio.h>
int main()
{
	int x;
	printf("enter any number : ");
	scanf("%d",&x);
	(x&1) ? printf("odd") : printf("even");
	return 0;
}
