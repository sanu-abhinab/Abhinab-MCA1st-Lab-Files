//C Programe to check is a string is palindrome.

#include<stdio.h>
#include<string.h>
main()
{
  char st[20], rst[20];
  int i, j;
  
  printf("\n Enter the string: ");
  scanf("%s",st);

  i=0;
  j=strlen(st) - 1;

  while(j>=0)
    {
    rst[i] = st[j];
    i++;
    j--;
    rst[i]='\0';

    if(strcmp(st,rst) == 0)
      printf("\n %s is a palindrome string", st);
    else
      printf("\n %s is not a palindrome string",st);
  }
