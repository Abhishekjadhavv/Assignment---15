// Write a function in C to count the frequency of each element of an array.

#include <stdio.h>
void count_frequency(int arr[], int n);
int main()
{
    int arr[10] = {2, 2, 4, 75, 4, 23, 56, 76, 5, 4};
    count_frequency(arr, 10);
    return 0;
}

void count_frequency(int arr[], int n)
{
    int count_f, i, j;
    int temp[n];
    for (i = 0; i < n; i++)
        temp[i] = arr[i];
    for (i = 0; i < n; i++)
    {
        count_f = 1;
        for (j = i + 1; j < n; j++)
        {

            if (temp[i] == -1)
            {
                break;
            }

            if (temp[i] == temp[j])
            {
                count_f += 1;
                temp[j] = -1;
            }
        }

        if (temp[i] != -1)
            printf("%d is %d time\n", temp[i], count_f);
    }
}