// Write a function to sort an array of any size. (TSRS)

#include <stdio.h>
void sort_array(int arr[], int n);
int main()
{
    int n = 5;
    int arr[n];

    printf("Enter %d number", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    sort_array(arr, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void sort_array(int arr[], int n)
{
    int round, i, temp;

    for (round = 1; round <= n - 1; round++)
    {
        for (i = 0; i <= (n - 1) - round; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}