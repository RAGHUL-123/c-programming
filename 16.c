//VERIFY the  vowels and consonant with isalpha

#include<stdio.h>
#include<ctype.h>
int main()
{
    char c;
    int rahul,kumar;
    printf("enter the letter : ");
    scanf(" %c",&c);
    rahul = (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
   kumar = (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(rahul||kumar)
    {
        printf("%c is a vowel",c);
    }
    else if(!isalpha(c))
    {
        printf("not a alphabet",c);
    }
    else
    {
        printf("%c is a consonant",c);
    }
    return 0;
}
