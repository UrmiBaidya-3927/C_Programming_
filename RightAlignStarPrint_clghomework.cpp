/* Write a c prgrm to display the following pattern 
    *
   **
  ***
 ****
*****  */
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter the number of row:");
	scanf("%d",&n);
	//outer loop to handle the number of rows 
	for(i=1;i<=n;i++)
	{
		//inner loop 1:print leading spaces to right-align the stars 
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		//inner loop 2:print the stars for the current row
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		//move to the next line after completing a row
		printf("\n");
	}
	return 0;
}
