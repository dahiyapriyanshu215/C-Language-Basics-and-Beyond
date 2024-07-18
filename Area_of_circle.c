# include<stdio.h>

/*The Radius of a circle is input through the keybaord.
WAP to calculate the area and circumference of the circle.*/

int main(){

    float radius, circumference, area_c;

    printf("Enter Radius of the Circle : \n");
    scanf("%f",&radius);   //stores the value of radius of the circle

    circumference = 2 * 3.14 * radius;   //stores the value of circumference of the circle
    printf("Circumference of the Cirlce is : %f \n",circumference);

    area_c = 3.14 * radius * radius;   //stores the value of area of the circle
    printf("Area of the Circle is : %f \n",area_c);

    return 0;
}
