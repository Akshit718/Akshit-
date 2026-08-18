#include  <stdio.h>

int main(){

int year;
printf("Enter a year: ");
scanf("%d", &year);

if (year % 4 == 0) {
    if (year % 100 == 0) {
        if (year % 400 == 0) {
            printf("%d is a leap year.\n", year);
        } else {
            printf("%d is not a leap year.\n", year);
        }
    } else {
        printf("%d is a leap year.\n", year);
    }
} else {
    printf("%d is not a leap year.\n", year);
}

return 0;
}

// day 7 code 2 

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }

    return 0;
}