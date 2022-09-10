// Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include<stdio.h>

int main()
{
    char str[50];
    int alphabet=0, digit=0, special=0,i;

    printf("Enter the string: ");
    gets(str);

    for(i=0; str[i]; i++) {

        if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
            alphabet++;
        else if(str[i]>='0'&&str[i]<='9')
            digit++;
        else
            special++;
    }
    printf("\ntotal number of alphabet = %d", alphabet);
    printf("\ntotal number of digit = %d",digit);
    printf("\ntotal number of special character = %d", special);

    return 0;
}
