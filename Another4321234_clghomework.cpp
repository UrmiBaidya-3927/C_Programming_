/*write a c prgrm to print the following pattern
4321234
 43234
  434
   4          */
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	for(j=1;j<i;j++)
    	printf(" ");
    	for(j=n;j>=i;j--)
    	printf("%d",j);
    	for(j=i+1;j<=n;j++)
    	printf("%d",j);
    	printf("\n");
	}
	return 0;
}   
