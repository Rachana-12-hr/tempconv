#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Please Enter the temperature in Fahrenheit: \n");
    scanf("%f", &fahrenheit);

    // Convert the temperature from f to c formula
    celsius = (fahrenheit - 32) * 5 / 9;
    //celsius = 5 *(fahrenheit - 32) / 9;
    //celsius =(fahrenheit-32) * 0.55556;

    printf("\n %.2f Fahrenheit = %.2f Celsius", fahrenheit, celsius);

    return 0;
}
