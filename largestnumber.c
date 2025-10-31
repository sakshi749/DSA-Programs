//created by sakshi bhatt
#include<stdio.h>
int largest(int arr[], int size)
{
    int largest = arr[0];
    for (int i = 1; i<size; i++)
    {
        if (arr[i] > largest)
    {
        largest = arr[i];
    }
}
return largest;
}
int main()
{
    int arr[] = {10,20,30,40,50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest_number = largest(arr , size);
    printf("The required largest number is : %d\n", largest_number);
    return 0;
    }