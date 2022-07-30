// Write a function to find the smallest number from the given array of any size. (TSRS)

#include <stdio.h>
int smallest_number(int[], int);
int main()
{
    int n = 5;
    int arr[n];

    printf("Enter 5 number");

    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("Smallest number of array is %d", smallest_number(arr, n));
    return 0;
}

int smallest_number(int arr[], int n)
{
    int min = arr[0];

    for (int i = 0; i <= n - 1; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }

    return min;
}