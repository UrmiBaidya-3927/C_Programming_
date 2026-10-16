/*write a c prgrm which read an integer value and check whether it is positive or not 
after satisfying the integer value>0. if it is positive then check whether it is odd
or even.*/
#include<stdio.h>
int main()
{
	int num;
	//read an integer value from the user
	printf("enter an integer value:");
	scanf("%d",&num);
	//check if the integer value is positive(>0)
	if (num>0)
	{
		printf("%d is a positive number \n",num);
		//check if the positive number is odd or even
		if(num%2==0)
		{
			printf("%d is even \n",num);
		}
		else
		{
			printf("%d is odd \n",num);
		}
	}
	else
	{
		printf("%d is not a positive number",num);
	}
	return 0;
}
