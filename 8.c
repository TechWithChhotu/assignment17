// Write a program in C to copy one string to another string.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],copy[50];
    int i;

    printf("Enter the string: ");
    gets(str);

    // strcpy(copy,str);
//or
    for(i=0; str[i]; i++)
        copy[i]=str[i];


    printf("copyed string: %s",copy);
    return 0;
}
