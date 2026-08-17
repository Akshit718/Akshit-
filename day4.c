// #include <stdio.h>

// int main() {
//     int a, b;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);

//     // Swap without third variable
//     a = a + b;
//     b = a - b;
//     a = a - b;

//     printf("After swapping:\n");
//     printf("First number = %d\n", a);
//     printf("Second number = %d\n", b);

//     return 0;
// }



int main() {
    int n, sum = 0, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}