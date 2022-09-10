//Write a C program to sort a string array in ascending order.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],temp;
    int i,j;

    printf("Enter the string: ");
    gets(str);

    for(i=0; str[i]; i++) {
        for(j=i+1; str[j]; j++) {
            if(str[j]<str[i]) {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;

            }

        }
    }
    printf("%s",str);
    return 0;
}
