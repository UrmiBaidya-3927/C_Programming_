/*write a c prgrm to accept a number and find the sum of it's individual digits repeatedly till the result is 
a single digit.*/
#include<stdio.h>
int main()
{
	int num,sum=0;
	//prompt user to enter a number
	printf("enter a number:");
	scanf("%d",&num);
	//continue the process until the number becomes 0
	//and the sum is a single digit (0 through 9)
	while (num>0, sum>9)
	{
		if(num==0)
		{
		   num=sum; //reset num to the calculate sum
		   sum=0;   //reset sum for the next round
		}
		sum+=num%10; //extract the last digit and add to sum
		num/=10;     //remove the last digit from the number
	}
	//print the final single-digit result
	printf("the single-digit sum is:%d\n",sum);
	return 0;
}
