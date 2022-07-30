// Write a function to find the greatest number from the given array of any size. (TSRS)

#include<stdio.h>
int greatest_number(int[],int);
int main()
{   
    int n=5;
    int arr[n];

    printf("Enter 5 number");

    for(int i = 0;i<5;i++)
       scanf("%d",&arr[i]);
    
    printf("greatest number of array is %d",greatest_number(arr,n));
    return 0;
}

int greatest_number(int arr[],int n)
{
   int max = arr[0];

   for(int i = 0;i<=n-1;i++){
       if(max<arr[i])
           max = arr[i];       
   }

   return max;
}