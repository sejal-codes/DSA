#include <stdio.h>
int findsum(int n){
    if(n==1){
        return 2;
    }
    else
    return (2*n-1)+findsum(n-1);
}
int main() {
   int n;
   printf("enter the value of N:");
   scanf("%d",&n);
   printf("the sum is:%d",findsum(n));
 return 0;
}
