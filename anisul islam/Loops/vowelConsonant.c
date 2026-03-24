#include<stdio.h>
int main(){
    char letter;
    printf("Enter a letter :");
    scanf("%s", &letter);


    if(letter=='a'|| letter=='e'|| letter=='i'|| letter=='o'|| letter=='u' )
    {
        printf("Vowel and small letter");
    }


    else if(letter=='A'|| letter=='E'|| letter=='I'|| letter=='O'|| letter=='U')
    {
        printf("vowel and capital letter");
    }


    else if(letter>'A' && letter<'Z')
    {
        printf("Consonant and capital letter");
    }

    else if(letter>'a' && letter<'z')
    {
        printf("Consonant and small letter");
    }
    
    return 0;
}