#include <stdio.h>
float circleArea (float radius);
float claPeri (float radius);
int main (void)
{
    float radius, height, perimeter, calArea;
    
    printf("Enter the radius of the cylinder : ");
    scanf("%f", &radius);
    
    printf("enter the height of the cylinder : ");
    scanf("%f", &height);
    
    calArea = 2 * circleArea(radius);
    
    perimeter = claPeri(radius);
    
    printf("Area of two cicles : %.2f\n", calArea);
    
    printf("Perimeter of a circle : %.2f\n", perimeter);
    
    return 0;
}
float circleArea (float radius)
{
    float area;
    
    area = (22.0/7) * radius * radius;
    
    return area;
}
float claPeri (float radius)
{
    float perimeter;
    
    perimeter = 2 * (22.0/7) * radius;
    
    return perimeter;
}
