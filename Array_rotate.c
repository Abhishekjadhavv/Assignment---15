// Write a function to rotate an array by n position in d direction. The d is an indicative
// value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
// d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )

#include <stdio.h>
#include<conio.h>
void rotate_array_ele(int[], int, int, char);
int main()
{

    int arr[5] = {32, 29, 40, 12, 70};
    int n = 5, n_position;
    char d;

    printf("Enter n position and direction l for left and r for right\n");
    scanf("%d", &n_position);
    d = getche();

    printf("\nBefore rotating\n"); 
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    rotate_array_ele(arr, n, n_position, d);
    
    printf("\nAfter rotating\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

void rotate_array_ele(int arr[], int size, int n_position, char d)
{
    int i, j, temp_left, temp_right;

    for (i = 0; i < n_position; i++)
    {
        temp_left = arr[0];
        temp_right = arr[size - 1];

        for (j = 0; j < size - 1; j++)
        {
            if (d == 'l' || d == 'L')
            {
                arr[j] = arr[j + 1];
            }
            else if (d == 'r' || d == 'R')
            {
                arr[size - 1 - j] = arr[size - 2 - j];
            }
        }

        if (d == 'l' || d == 'L')
        {
            arr[j] = temp_left;
        }
        else if (d == 'r' || d == 'R')
        {
            arr[size - 1 - j] = temp_right;
        }
    }
}