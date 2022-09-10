// Write a program to calculate the length of the string. (without using built-in method)
#include<stdio.h>
int main()
{
	char str[100],i;
	printf("Enter your string: ");
	gets(str);
	
	for(i=0;str[i];i++);
	printf("lenght = %d",i);
	
return 0;
}

