#include <stdio.h>
float celsiusToFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

float celsiusToKelvin(float celsius) {
    return celsius + 273.15;
}

int main() {
    float celsius;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    printf("Fahrenheit: %.2f\n", celsiusToFahrenheit(celsius));
    printf("Kelvin: %.2f\n", celsiusToKelvin(celsius));

    return 0;
}
