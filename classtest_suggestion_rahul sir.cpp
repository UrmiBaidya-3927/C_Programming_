#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter two integer value:");
	scanf("%d%d",&a,&b);
	printf("before swapping:a=%d,b=%d\n",a,b);
	//swapping using a temporary variable
	temp=a;
	a=b;
	b=temp;
	printf("after swapping:a=%d,b=%d",a,b);
	return 0;
}
