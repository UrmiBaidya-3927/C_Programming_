/*write a c prgrm to find the net payble amount after applying a discount. 
If the purchase amount is >=10,000 the customer will get a discount of 10%, otherwise they
will get a discount of 5%.*/

#include<stdio.h>
int main()
{
	float pur,amt,dis;
	printf("enter the purchase amount=");
	scanf("%f",&pur);
	if (pur>=10,000)
	{
		dis=pur*(0.01);
		amt=pur-dis;
	}
	else
	{
		dis=pur*(0.05);
		amt=pur-dis;
	}
	printf("the net payble amount is=%f", amt);
	return 0;
}
