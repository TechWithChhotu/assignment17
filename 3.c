// Write a program to count vowels in a given string
#include<stdio.h>
int main()
{
	char str[50];
	printf("Enter your string: ");
	gets(str);
	
	int i,count=0;
	for(i=0;str[i];i++)
	if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
	count++;

	printf("total number of vowel is %d",count);
return 0;
}

