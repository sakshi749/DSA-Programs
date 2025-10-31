// Accessing array elements using pointer
//created by sakshi bhatt
#include<stdio.h>
int main() 
{
int arr[] = {10, 20, 30, 40, 50};
int *ptr = arr;
printf("Array elements using pointer: \n");
for (int i = 0; i < 5; i++) 
{
printf ( "%d", *ptr ); 
ptr++; 
}
printf ("\n");
return 0;
}