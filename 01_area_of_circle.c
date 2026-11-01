/*
 * Program 01: Area of a Circle
 * Takes the radius from the user and prints the area.
 * Formula: area = pi * r * r
 * Concepts: variables, float, printf, scanf, & (address-of)
 */
#include <stdio.h>
int main(){
    int radius_of_circle;
    printf("Enter the radius: ");
    scanf("%d",&radius_of_circle);
    float pi = 3.1416;
    float formula = pi*(radius_of_circle*radius_of_circle);
    printf("The area of the circle is %.2f\n",formula);
    return 0;
}