#include <stdio.h>

int main() {
    int a[100];
    int n, i,j,temp;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    i=0;
    j=n-1;
    while(i<j){
         temp=a[j];
         a[j]=a[i];
         a[i]=temp;
         i++;
         j--;
         
    }
    printf("reversed array:");
     for(int i=0; i<n; i++) {
         printf("%d",a[i]);
         printf("\n");
     }
    return 0;
}
