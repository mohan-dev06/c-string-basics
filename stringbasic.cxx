#include<stdio.h>
#include<conio.h>
void main() 
{
 char str[200];
 int i = 0, length = 0, vowels = 0, digits = 0, spaces = 0;
 printf("Enter a string: ");
 gets(str);  
 while(str[i] != '\0') 
 {
  length++;
  if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
  {
  vowels++;
  }
   else if(str[i] >= '0' && str[i] <= '9') 
  {
   digits++;
  }
   else if(str[i] == ' ') 
  {
   spaces++;
  }
   i++;
  }
    printf("\nLength = %d", length);
    printf("\nVowels = %d", vowels);
    printf("\nDigits = %d", digits);
    printf("\nSpaces = %d", spaces);
    getch();
}