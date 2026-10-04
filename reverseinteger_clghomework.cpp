//write a c prgrm to reverse the digits of an integers.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,nd,r,s;
	s=0;
	printf("enter the number of digit:");
	scanf("%d",&nd);
	printf("enter the number:");
	scanf("%d",&n);
	i=1;
	while(i<=nd)
	{
		r=n%10;
		n=n/10;
		s=s*10+r;
		i=i+1;
	}
	printf("reverse of the number is %d",s);
	printf("\n\n\n\n press any key to exit");
	return 0;
}
