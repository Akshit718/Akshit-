//  #include <stdio.h>

//  int main()
//  {
//      float length,width,area,perimeter;
//      printf("enter Len");
//      scanf("%f", &length);

//      printf("enter width");
//      scanf("%f", &width);

//      area= length*width;
//      perimeter = 2 * (length + width);

//      printf("Area of rectangle = %.2f\n", area);
//      printf("Perimeter of rectangle = %.2f\n", perimeter);

//      return 0;
//  }

 #include <stdio.h>

 int main() {
     float celsius, fahrenheit;

     printf("Enter temperature in Celsius: ");
     scanf("%f", &celsius);

     fahrenheit = (celsius * 9 / 5) + 32;

     printf("Temperature in Fahrenheit = %.2f", fahrenheit);

     return 0;
 }