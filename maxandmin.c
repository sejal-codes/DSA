// Problem Name: Find Maximum and Minimum in an Array
// Problem Source: Basic Array Problem / Common Interview Question
// Approach / Strategy:
// Initialize both max and min with the first element.
// Traverse the array from index 1 to n-1:
//   - If current element is greater than max, update max.
//   - Else if current element is smaller than min, update min.
// Print the final maximum and minimum values.
//
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <stdio.h>

int main() {
    int a[100];
    int n, max, min;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Array size must be greater than 0.\n");
        return 0;
    }
    printf("Enter the array elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[0];
    for(int i=1;i< n;i++) { 
        if(a[i] > max) {
            max = a[i]; 
        } 
        else if(a[i] < min) {
            min = a[i]; 
        }
    }
    printf(" Max: %d\n", max);
    printf(" Min: %d\n", min);

    return 0;
}
