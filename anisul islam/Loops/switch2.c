#include<stdio.h>
int main(){
    char letter;
    printf("Enter a Letter :");
    scanf("%s", &letter);

    switch(letter)
    {
        case 'a' : 
        // printf("Vowel");
        // break;

         case 'e' : 
        // printf("Vowel");
        // break;

         case 'i' : 
        // printf("Vowel");
        // break;

         case 'o' : 
        // printf("Vowel");
        // break;

         case 'u' : 
        // printf("Vowel");
        // break;

        case 'A': 
        case 'E':
        case 'I': 
        case 'O': 
        case 'U':  
            printf("Vowel");
            break;
    default: 
    printf("Consonant");
    }

    return 0;

}