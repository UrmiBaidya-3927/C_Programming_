/*write a c prgrm to print the following pattern
    1
   1 1
  1   1
 1     1
111111111              */
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
		printf(" ");
		for(j=1;j<=2*i-1;j++)
		{
			if(i==5||j==1||j==2*i-1)
			printf("1");
			else
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
