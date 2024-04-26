// PRACTICAL 16
// Write a program to calculate the area and circumference of a circle 
// using functions. 

#include <stdio.h>

float Area(float radius) {
    float area = 3.14159 * radius * radius;
    return area;
}

float Circum(float radius) {
    float circumference = 2 * 3.14159 * radius;
    return circumference;
}

int main() {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    float area = Area(radius);
    float circumference = Circum(radius);

    printf("Area of the circle: %.2f\n", area);
    printf("Circumference of the circle: %.2f\n", circumference);

    return 0;
}