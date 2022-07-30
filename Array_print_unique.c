// Write a function in C to print all unique elements in an array.

#include <stdio.h>
void print_unique_num(int arr[], int size);
int main()
{
    int arr[8] = {23, 23, 64, 33, 44, 33, 78, 64};
    print_unique_num(arr, 8);
    return 0;
}

void print_unique_num(int arr[], int size)
{
    int temp[size], i,check;
    for (i = 0; i < size; i++)
    {
        temp[i] = arr[i];
    }

    for (i = 0; i < size -1; i++)
    {   check = 0;
        for (int j = i + 1; j < size ; j++)
        {
            if(temp[i] == temp[j]){
              check = 1;
              temp[j] = -1;
            }
        }

        if(check == 0 && temp[i] != -1){
         printf("%d ",temp[i]);
        }
    }
}
