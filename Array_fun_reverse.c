// Write a function in C to read n number of values in an array and display it in reverse
// order.

#include <stdio.h>
void print_reverse(int arr[], int n);
int main()
{

    int arr[5] = {34, 56, 43, 23, 56};
    print_reverse(arr, 5);
    return 0;
}

void print_reverse(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}