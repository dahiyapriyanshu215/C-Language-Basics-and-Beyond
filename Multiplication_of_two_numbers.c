//Program to take input of two numbers and print their multiplication.

# include<stdio.h>   //header file is present here
int main()   //int is for return type func which means it is supposed to return some numerical value
{    //main func starts here
	int a,b;   //two integer variables a & b are defined here

	printf("Enter First Number : "); 
	scanf("%d",&a);   //takes 1st number as input from the user

	printf("Enter Second Number : ");
	scanf("%d",&b);   //takes 2nd number as input from the user

	printf("The Multiplication of the two numbers is : %d", a * b);   //gives out the multiplication of user defined two numbers

	return 0;   //this statement suggests that no numeric value has been returned to the func
}   //main func ends here
