//write a c prgrm to display a sort of three input numbers in ascending order.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter any three numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a<=b&&b<=c)
	{
		if (b<=c)
		printf("ascending order:%d%d%d",a,b,c);
		else
		printf("ascending order:%d%d%d",a,c,b);
	}
	else if(b<=a&&b<=c)
	{
		if(a<=c)
		printf("ascending order:%d%d%d",b,a,c);
		else
		printf("ascending order:%d%d%d",b,c,a);
	}
	else
	{
		if(a<=b)
		printf("ascending order:%d%d%d",c,a,b);
		else
		printf("ascending order:%d%d%d",c,b,a);
	}
	return 0;
}
