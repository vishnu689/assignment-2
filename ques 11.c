#include<stdio.h>
int main()
{
	float r,d;
	printf("Enter rupees to be converted : ");
	scanf("%f",&r);
	d=r/76.23;
	printf("%.2f rupees is equal to %.2f dollar",r,d);
	return 0;
}
