# include<stdio.h>

/*The length and breath of the rectangle are input through the keybaord.
WAP to calculate the area and perimeter of the rectangle.*/

int main(){

    float length, breath, area_r, peri;

    printf("Enter the Length : \n");
    scanf("%f",&length);   //stores the value of length of the rectangle
  
    printf("Enter the Breath : \n");
    scanf("%f",&breath);   //stores the value of breadth of the rectangle

    peri = (length + breath) * 2;   //stores the value of perimeter of the rectangle
    printf("Perimeter of the Rectangle is : %f \n",peri);

    area_r = length * breath;   //stores the value of area of the rectangle
    printf("Area of the Rectangle is : %f \n",area_r);

    return 0;   //no numeric value has been returned to the function 
}
