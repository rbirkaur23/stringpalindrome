#include<stdio.h>
#include<conio.h>
void main()
{
  char a[50][50];
  clrscr();
  printf("Enter string: ");
  gets(a);
  strupr(a);
  strcpy(b,a);
  strrev(b);
  if(strcmp(a,b)==0)
  {
    printf("Palindrome");
  }
  else
  {
    printf("Not Palindrome");
  }
  getch();
  
}
