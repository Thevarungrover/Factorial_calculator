#include<stdio.h>
int fact(int f_num); // function prototype
int main(void) // main function  
{
	int tester; // variable declaration
	printf("Enter any positive number to get its factorial :");
	scanf("%d",&tester); // grtting input for factorial
	printf("\nFactorial of %d is %d,",tester,fact(tester)); // function call[fact(tester)]
}
int fact(int f_num) // function declartion
{
	
	int number;
	if(f_num==1)
	{
	number=1;
	}

	else
	{
	number=fact(f_num-1)*f_num;
	printf("\nresult after %d\n",number);
	}
	return (number);
}

