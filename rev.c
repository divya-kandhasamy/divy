#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[10];
printf("Enter the string");
scanf("%s",&s);
for(i=strlen(s);i>=0;i--)
printf("%c",s[i]);
getch();
}
