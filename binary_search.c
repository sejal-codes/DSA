// Problem Name: Binary Search in an Array
// Problem Source: Basic Searching Problem / Common Interview Question
// Approach / Strategy:
// Use Binary Search on a sorted array.
// Initialize low = 0 and high = size - 1.
// Find mid element:
//   - If arr[mid] == search, element found.
//   - If arr[mid] < search, search in right half.
//   - If arr[mid] > search, search in left half.
// Repeat until low > high.
//
// Time Complexity: O(log n)
// Space Complexity: O(1)
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
