#include <stdio.h>

int main() {
    int a[100],b[100];
    int n,target;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the arr1 elements:");
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
     printf("enter the arr2 elements:");
    for(int j=0;j<n;j++){
    scanf("%d",&b[j]);
    }
    printf("enetr target value:");
    scanf("%d",&target);
// Iterating through the first array
    for(int i=0;i<n;i++){
// For each element in array A, check every element in array B
        for(int j=0;j<n;j++){
            if(a[i]+b[j]==target)//checking condition
            {
                printf("Pair found! Indices: Array1[%d], Array2[%d]\n", i, j);
                return 0;// Successfully found the pair and exited
            }
        }
    }
    
}  
