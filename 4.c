// Write a program to convert a given string into uppercase
#include<stdio.h>
int main()
{
	char str[50];
	printf("Enter string in lowercase: ");
	gets(str);
	
	int i;
	for(i=0;str[i]!=NULL;i++)
	if(str[i]!=32)
		str[i]-=32; 
		
	printf("%d",i);
	printf("after converting string:   %s",str);

return 0;
}

