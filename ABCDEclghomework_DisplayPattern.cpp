/*write a c prgrm to display the following pattern
A
AB
ABC
ABCD
ABCDE    */
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter the number of lines:");
	scanf("%d",&n);
	printf("\n the pattern is as follow:\n\n");
	//controls the number of lines 
	for(i=1;i<=n;i++)
	{
		//prints the alphabets in each line
		for(j=1;j<=i;j++)
		{
			printf("%c",'A'+j-1);
			/* j-1 makesbthe first alphabet A,the second B,the third C,and so on.
			for example, when j=3:'A'+3-1 gives c. */
		}
		printf("\n");
	}
	return 0;
}
