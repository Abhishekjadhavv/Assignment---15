// Write a function in C to count a total number of duplicate elements in an array.

#include <stdio.h>
int duplicate(int arr[], int size);
int main()
{
    int arr[8] = {44, 33, 56, 33, 44, 55, 66, 77};
    printf("total duplicate elements is array is %d", duplicate(arr, 8));
    return 0;
}

int duplicate(int arr[], int size)
{
    int count_num = 0;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i+1; j < size - 1; j++)
        {
            if (arr[i] == arr[j])
            {
                count_num++;
            }
        }
    }

    return count_num;
}