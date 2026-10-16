/*write a c prgrm to calculate the electricity bill based on the number of units 
consumed.The charges are:0-100 unit~2 ruppee/unit
101-200 unit~3 ruppee/unit   201-300 unit~5 ruppee/unit
301-above unit~7 ruppee/unit. calculate the electricity bill.*/
 #include<stdio.h>
 int main()
 {
    int units;
    float bill=0.0;
    //input the number of units consumed
	printf("enter the units consumed:");
	scanf("%f",&units);
	//calculate bill based on progressive slabs
	if (units<=100)
		bill=units*2;
	else if(units<=200)
		bill=(100*2)+(units-100)*3;
	else if(units<=300)
	    bill=(100*2)+(100*3)+(units-200)*5;
	else
	    bill=(100*2)+(100*3)+(100*5)+(units-300)*7;
		//output the final calculated bill
		printf("total electricity bill=Rs. %.2f\n",bill);    
	return 0;
 }                        
