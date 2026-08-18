//day 8 code  1

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase alphabet");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase alphabet");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("Digit");
    }
    else
    {
        printf("Special character");
    }

    return 0;
}




// day 8 code 2 





#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
    {
        printf("Largest = %d", a);
    }
    else if (b >= a && b >= c)
    {
        printf("Largest = %d", b);
    }
    else
    {
        printf("Largest = %d", c);
    }

    return 0;
}