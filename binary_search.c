#include <stdio.h>
int main()
{
    int arr[100], size, search;
    int low,mid,high;
    printf("Enter the size of array:\n");
    scanf("%d",&size);
    printf("enter the elements of array:\n");
    for(int i=0;i<size;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("enter the element to be searched:\n");
    scanf("%d",&search);
       low=0;
       high=size-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==search)
        {
            printf("Element found at index %d\n", mid);
            return 0;
        }
        else if(arr[mid]<search)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    printf("element not found\n");
    return 0;
    }
