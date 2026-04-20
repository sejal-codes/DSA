// Problem Name: Linear Search in an Array
// Problem Source: Basic Searching Problem / Common Interview Question
// Approach / Strategy:
// Traverse the array from index 0 to size - 1.
// Compare each element with the target value.
// If a match is found, print the index and stop.
// If no match is found after traversal,
// print "element not found".
//
// Time Complexity: O(n)
// Space Complexity: O(1)
#include <stdio.h>
int main()
{
    int arr[100], size, search;
    printf("Enter the size of array:\n");
    scanf("%d",&size);
    printf("enter the elements of array:\n");
    for(int i=0;i<size;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("enter the element to be searched:\n");
    scanf("%d",&search);
    for(int i=0;i<size;i++)
{
  if(arr[i]==search)
  {
  printf("element found at index %d\n",i);
  return 0;
  }
}
  printf("element not found");
  return 0;
  }
