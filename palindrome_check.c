#include <stdio.h>
#include<string.h>
int main() {
    char str[100];
    int i,j;
    int ispalindrome=1;
    printf("Enter the string: ");
    scanf("%s",&str);
   int n=strlen(str);
   i=0;
   j=n-1;
    while(i<j){
         if(str[i]!=str[j])
         {
             ispalindrome=0;
             break;
         }
         i++;
         j--;
    }
    if (ispalindrome == 1) {
        printf(" Palindrome\n");
    } else {
        printf(" Not a Palindrome\n");
    }
    return 0;
}
    
