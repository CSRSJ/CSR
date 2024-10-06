#include <stdio.h>
 
float calculateRectangleArea(float length, float width);
 
int main()
{
    float length;
    float width;
    printf("Enter the value of length:\n");
    scanf("%f",&length);
    printf("Enter the value of width:\n");
    scanf("%f",&width);
 
    // Function call
    float area = calculateRectangleArea(length, width);
 
    printf("The area of the rectangle is: %.2f\n", area);
 
    return 0;
}
 
// Function definition
float calculateRectangleArea(float length, float width)
{
    return length * width;
}