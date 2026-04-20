// Problem Name: First Non-Repeating Character in a String
// Problem Source: Basic String Problem / Common Interview Question
// Approach / Strategy:
// Use a frequency array of size 256 for ASCII characters.
// First traverse the string and count frequency
// of each character.
// Traverse the string again:
//   - The first character with frequency 1
//     is the first non-repeating character.
// If no such character exists, print message.
//
// Time Complexity: O(n)
// Space Complexity: O(1)
#include <stdio.h>
#include<string.h>
int main() {
    char str[100];
    int count[256]={0};
    int i,j;
    printf("Enter the string: ");
    scanf("%s",&str);
    int n=strlen(str);
       for(i=0;i<n;i++){
            count[(int)str[i]]++;
    }
      for(i=0;i<n;i++){
           if(count[(int)str[i]]==1){
               printf("The first non-repeating character is: %c\n", str[i]);
            return 0; 
        }
    }

    printf("No unique character found.\n");
    return 0;
}
