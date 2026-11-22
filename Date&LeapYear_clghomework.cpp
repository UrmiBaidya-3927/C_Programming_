/*write a c prgrm using switch-case statements to accept a date(day/month/year) from the user and determine the
corresponding day of the week. The prgrm should consider leap years also.*/
#include<stdio.h>
int main()
{
	int d,m,y;
	int days,i,leap;
	int monthDays[]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("enter date(DD MM YYYY):");
	scanf("%d%d%d",&d,&m,&y);
	leap=(y%400==0||(y%4==0&&y%100!=0));
	if(leap)
	monthDays[1]=29;
	if(m<1||m>12||d<1||d>monthDays[m-1])
	{
		printf("invalid date");
		return 0;
	}
	days=0;
	for(i=1;i<y;i++)
	{
		if(i%400==0||(i%4==0&&i%100!=0))
		days+=366;
		else
		days+=365;
	}
	for(i=0;i<m-1;i++)
	days+=monthDays[i];
	days+=d;
	switch(days%7)
	{
		case 0:
			printf("sunday");
			break;
		case 1:
		    printf("monday");
			break;
	    case 2:
		    printf("tuesday");
			break;
		case 3:
		    printf("wednesday");
			break;
		case 4:
		    printf("thursday");
			break;
		case 5:
		    printf("friday");
			break;
		case 6:
		    printf("saturday");
			break;			 					
	}
	return 0;
}
