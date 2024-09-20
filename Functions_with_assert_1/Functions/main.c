#include <stdio.h>
#include <math.h>
#include <assert.h>
int qualityPoints(int average);
int main (void)
{
    int avg, points;
    
    assert( qualityPoints(40) == 0 );
    assert( qualityPoints(60) == 1 );
    assert( qualityPoints(65) == 1 );
    assert( qualityPoints(69) == 1 );
    assert(qualityPoints(70) == 2);
    assert(qualityPoints(75) == 2);
    assert(qualityPoints(79) == 2);
    assert(qualityPoints(80) == 3);
    assert(qualityPoints(85) == 3);
    assert(qualityPoints(89) == 3);
    assert(qualityPoints(90) == 4);
    assert(qualityPoints(95) == 4);
    assert(qualityPoints(100) == 4);
    
    printf("Enter the average : ");
    scanf("%d", &avg);
    
    points = qualityPoints(avg);
    
    printf("GPA is : %d\n", points);
    
    return 0;
    
}
int qualityPoints(int average)
{
    int ima;
    
    if (average < 60) {
        ima = 0;
    }
    if (average < 70) {
        ima = 1;
    }
    if (average < 80) {
        ima = 2;
    }
    if (average < 90) {
        ima  = 3;
    }
    if (average <= 100) {
        ima = 4;
    }
    
    return ima;
}
