#include<stdio.h>
int main()
{
	int rad;
	float pi=3.14,area,ci;
	printf("\n Enter rad of circle :");
	scanf("%d",&rad);
	area=pi*rad*rad;
	
	printf("\n area of circle is=%f",area);
	ci=2*pi*rad;
	printf("\n circumference is=%f",ci);
	return 0;
}
