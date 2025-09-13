#include <stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
           ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }
    } else {
        printf("Invalid input. Please enter an alphabet character.\n");
    }
    return 0;
}