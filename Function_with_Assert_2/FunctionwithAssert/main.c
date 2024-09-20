#include <stdio.h>
#include <math.h>
#include <assert.h>

double hypotenuse(double s1, double s2);

int main(void)
{
    double side1, side2, hype;
    
    assert(hypotenuse(3, 4) - 5 < 0.01);
    assert(hypotenuse(5, 12) - 13 < 0.01);
    assert(hypotenuse(8, 15) - 17 < 0.01);
    
    printf("Enter the lenth of side one : ");
    scanf("%lf", &side1);
    
    printf("Enter the lenth of side two : ");
    scanf("%lf", &side2);
    
    hype = hypotenuse(side1, side2);
    
    printf("Hypotenuse of the triangle : %lf\n", hype);
    
    return 0;
    
    
}
double hypotenuse(double s1, double s2)
{
    return sqrt (pow(s1, 2) + pow(s2, 2) );
}

