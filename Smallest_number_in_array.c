#include <stdio.h>

/* WAP to find the Smallest Number in an Array. */

int main()
{
   int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   int i, smallest;

   smallest = array[0];
   
   for(i=0;i<10;i++) 
   {
      if(smallest > array[i]) 
        smallest = array[i];
   }
   
   printf("Smallest element of array is %d", smallest);   
   return 0;
}
