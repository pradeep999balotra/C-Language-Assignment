/*write a program to check whether a given character is vowel or consonant.*/
#include<stdio.h>
int main()
{
    char Character;
    printf("Enter a character : ");
    scanf("%c",&Character);

    if (Character == 'a' || Character == 'A' || Character == 'e' || Character == 'E' ||
        Character == 'i' || Character == 'I' || Character == 'o' || Character == 'O' || 
        Character == 'u' || Character == 'U')
    {
      printf("The character is a vowel");
    } 
    else
    {
        printf("The character is a consonant");
    }

    return 0;
}