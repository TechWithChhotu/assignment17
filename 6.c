//Write a program to reverse a string.
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	printf("Enter your string: ");
	gets(str);
	
	printf("reverse string: ");
	int i;
	for(i=strlen(str);i>=0;i--)
	printf("%c",str[i]);
	
return 0;
}

