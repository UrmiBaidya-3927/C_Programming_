//write a c prgrm to calculate the circumference & area of a circle.
#include<stdio.h>
int main()
{
	float r,cir,area;
	printf("enter the value of radius:");
	scanf("%f",&r);
	cir=(2*3.14*r);
	area=3.14*(r*r);
	printf("circumference=%2f\n",cir);
	printf("area=%2f\n",area);
	return 0;
}
