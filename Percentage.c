#include<stdio.h>

/*If the marks obtained by a student in 5 different subjects are input taken from the user.
Write a program to find out the aggregate marks and percentage marks obtained by the student.
Assume that the maximum marks that can be obtained by a student in each subject is 100.*/

int main(){

    float phy,chem,math,bee,cse,tperc,fperc,perc,agrmarks;   //variables are defined here

    printf("Enter your Physics marks : \n");
    scanf("%f",&phy);   //stores user input for Physics marks
  
    printf("Enter your Chemistry marks : \n");
    scanf("%f",&chem);  //stores user input for Chemistry marks
  
    printf("Enter your Mathematics marks : \n");
    scanf("%f",&math);  //stores user input for Mathematics marks
  
    printf("Enter your BEE marks : \n");
    scanf("%f",&bee);   //stores user input for BEE marks
  
    printf("Enter your CSE marks : \n");
    scanf("%f",&cse);   //stores user input for CSE marks

    agrmarks = (phy + chem + math + bee + cse);  //stores the aggregate marks of the student
    perc = (phy + chem + math + bee + cse) / 500; 
    fperc = perc * 100;  //stores the overall percentage marks of the student

    printf("Your Aggregate Marks is : %f \n",agrmarks);
    printf("Your Percentage is : %f \n",fperc);

    return 0;  //no numeric value has been returned to the function 
}
