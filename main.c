/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>

int main()
{
	//declaring variables
	int day1,month1,year1;
	int day2,month2,year2;
	int days_diff;
	int days_in_month[12]={31, 28, 31, 30, 31, 30,31, 31, 30, 31, 30, 31}; //array to store number of days in a particular month

	// invalid int variable is used as flag to decide whether date entered by user is valid or not
	int invalid=1; 
	//while loop is used to ask user for date1 until it is not valid
	while(invalid)
	{
		printf("Enter the first date: ");
		scanf("%d/%d/%d",&month1,&day1,&year1);
		//checking if month number is between 0 and 12 or not 
		//and checking if days number of the given month is correct or not
		if(0<month1<=12 && day1<=days_in_month[month1-1]) 
		{
			invalid=0; //changing invalid value to 0 if date is valid
		}
		else
		{
			//printing invalid message if date is invalid
			printf("Invalid date format please enter again\n");
		}	
	
			
	}
	invalid=1;
	//while loop is used to ask user for date2 until it is not valid
	while(invalid)
	{
		printf("Enter the second date: ");
		scanf("%d/%d/%d",&month2,&day2,&year2);
		//checking if month number is between 0 and 12 or not 
		//and checking if days number of the given month is correct or not
		if(0<month2<=12 && day2<=days_in_month[month2-1])
		{
			invalid=0; //changing invalid value to 0 if date is valid
		}
		else
		{
			//printing invalid message if date is invalid
			printf("Invalid date format please enter again\n");
		}	
	
			
	}

	//calculating number of days passed since 0th year jan 1st to date1
	long int days1=365*year1+day1;
	for(int i=0;i<month1-1;i++)
		days1+=days_in_month[i];
	//calculating number of days passed since 0th year jan 1st to date2
	long int days2=365*year2+day2;
	for(int i=0;i<month2-1;i++)
		days2+=days_in_month[i];

	//calculating differece between days1 and days2
	if(days2>days1)
		days_diff=days2-days1+1;
	else
		days_diff=days1-days2+1;

	printf("Number of dates between the two dates is: %d", days_diff);

}