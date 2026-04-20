// Problem Name: Maximum Sum Subarray of Size K
// Problem Source: Basic Array Problem / Sliding Window Technique
// Approach / Strategy:
// Calculate sum of first k elements as initial window sum.
// Store it as max_sum.
// Slide the window one element at a time:
//   - Remove outgoing element.
//   - Add incoming element.
// Update max_sum if current_sum is greater.
// Print the maximum sum found.
//
// Time Complexity: O(n)
// Space Complexity: O(1)
#include <stdio.h>
#include<string.h>
int main() {
   int current_sum=0,k,i,max_sum,n;
   int arr[100];
   printf("enter no. of array elements:");
   scanf("%d",&n);
    printf("enter the array:");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    printf("enter the value of k:");
    scanf("%d",&k);
   for(i=0;i<k;i++){
    current_sum+=arr[i];
}
    max_sum=current_sum;
    for(i=k;i<n;i++){
     current_sum=current_sum-arr[i-k]+arr[i];

    if(current_sum>max_sum){
    max_sum=current_sum;
}
}
 printf("MAX SUM:%d",max_sum);
 return 0;
}
