//WAP to find the area of the triangle
//The method used is called "Heron's formula"
# include<stdio.h>  
# include<math.h>    //provides mathematic func. for calculation

int main(){

    float a, b, c, sum, area;   //variables are defined here

    printf("Enter 1st Side of the Triangle : ");
    scanf("%f",&a);  //1st side of the triangle is taken input here by the user
    printf("Enter 2nd Side of the Triangle : ");
    scanf("%f",&b);  //2nd side of the triangle is taken input here by the user
    printf("Enter 3rd Side of the Triangle : ");
    scanf("%f",&c);  //3rd side of the triangle is taken input here by the user

    sum = (a + b + c) / 2;   //calculates the semi perimeter of the triangle 
    area = sqrt(sum * (sum-a) * (sum-b) * (sum-c));   //area of triangle is calculated here
    printf("Area of the Triangle is : %f",area);

    return 0;  //no numeric value is returned
}
