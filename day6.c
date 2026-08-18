// code first of the day 6 question >> whethere number is even or odd 
#include <stdio.h>

int main() {

    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("%d is even.\n", n);
    } else {
        printf("%d is odd.\n", n);
    }
}

// code second of the day 6 question >> whethere number is postivie or negative or zero using nested if-else

#include <stdio.h>

int main (){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("%d is positive.\n", n);
    } else if (n < 0) {
        printf("%d is negative.\n", n);
    } else {
        printf("The number is zero.\n");
    }
}
