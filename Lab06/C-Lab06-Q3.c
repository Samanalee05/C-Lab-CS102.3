#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c",&ch);

    if(ch>=97 && ch<=122)
        printf("You entered a lowercase letter.");
    else if(ch>=65 && ch<=90)
        printf("You entered an uppercase letter.");
    else if(ch>=48 && ch<=57)
        printf("You entered a number.");
    else if(ch==32)
        printf("You entered the blank character");
    else
        printf("You entered a special character.");

    return 0;
}
