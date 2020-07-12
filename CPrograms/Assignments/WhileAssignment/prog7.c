#include <stdio.h>
int main()
{
  char ch;
 
  printf("Enter a character\n");
  scanf("%c", &ch);
  

  while(ch<=90 && ch>=65){
  if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch =='o' || ch=='O' || ch == 'u' || ch == 'U')
    printf("%c is a vowel.\n", ch);
  else
    printf("%c isn't a vowel.\n", ch);
  ch++;
  }
}
