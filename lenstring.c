// Given a string s consisting of words and spaces, return the length of the last word in the string.

// A word is a maximal substring consisting of non-space characters only.

 

// Example 1:

// Input: s = "Hello World"
// Output: 5
// Explanation: The last word is "World" with length 5.
// Example 2:

// Input: s = "   fly me   to   the moon  "
// Output: 4
// Explanation: The last word is "moon" with length 4.
// Example 3:

// Input: s = "luffy is still joyboy"
// Output: 6
// Explanation: The last word is "joyboy" with length 6.
#include<stdio.h>
#include<string.h>
int main() {
    int count=0;
    char str[100];
    printf("Enter a string: ");
    scanf("%*c",str);
    for(int i = strlen(str) - 1; i >= 0; i--)
    {
        if(str[i] == ' ' && count == 0)
        continue;
        else if(str[i] !== ' '&& count>0)
        break;
        else
            count++;
    }
    printf("Length of the last word: %d\n", count);
    return 0;
}