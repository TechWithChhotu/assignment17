// Write a program in C to Find the Frequency of Characters.
#include<stdio.h>

int main()
{
    char str[50];
    printf("Enter the string: ");
    gets(str);

    int i,j,k,count;
    for(i=0; str[i]; i++) {
        count=1;
        for(j=i+1; str[j]; j++) {
            if(str[i]==str[j]) {
                for(k=j; str[k]; k++)
                    str[k]=str[k+1];
                count++;
                j--;
            }
        }
        printf("frequency of %c is %d\n", str[i],count);
    }
    return 0;
}

