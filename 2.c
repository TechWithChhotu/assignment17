// Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
int main()
{
	char str[50],ch;
	printf("Enter your character: ");
	gets(str);
	
	printf("Enter a character to count occurrence: ");
	scanf("%c",&ch);
	
	int i,count=0;
	for(i=0;str[i];i++){
		if(str[i]==ch)
		count++;
	}
	
	printf("total occurance of %c is %d",ch,count);
return 0;
}

