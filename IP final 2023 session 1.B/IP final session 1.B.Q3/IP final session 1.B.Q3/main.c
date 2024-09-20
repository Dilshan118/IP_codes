#include <stdio.h>
#include <assert.h>
#include <math.h>

float calPayment (int offPeak, int peak);

float calServiceCharge(int offPeak, int peak);

void testCalPayment(void);

int main(void)

{
    int peakUnits, offPeakUnits;
    float chargesForUnits = 0.0;
    float serviceCharge = 0.0;
    float totalBill = 0.0;
    int i;
    
    for (i = 1; i <= 5; i++)
    {
        printf("Enter the units used in peak hours for customer %d : ", i);
        scanf("%d", &peakUnits);
        
        printf("Ente the units used in off peak hours for customer %d : ", i);
        scanf("%d", &offPeakUnits);
        
        chargesForUnits = calPayment(offPeakUnits, peakUnits);
        
        serviceCharge = calServiceCharge(offPeakUnits, peakUnits);
        
        totalBill = chargesForUnits + serviceCharge;
        
        printf("Monthly bill payment is : %.2f\n\n", totalBill);
    }
}

float calPayment (int offPeak, int peak)
{
    float UnitPrice_peak = 0.0;
    float unitPrice_offPeak = 0.0;
    float totalCharge = 0.0;
    
    if (peak <= 100)
    {
        UnitPrice_peak = 45.00;
    }
    else if (peak >= 101 && offPeak <= 200)
    {
        UnitPrice_peak = 65.00;
    }
    else
    {
        UnitPrice_peak = 90.00;
    }
    if (offPeak <=100)
    {
        unitPrice_offPeak = 35.00;
    }
    if (offPeak >= 150 && offPeak <= 200)
    {
        unitPrice_offPeak = 50.00;
    }
    else
    {
        unitPrice_offPeak = 70.00;
    }
    
    totalCharge = peak * UnitPrice_peak + offPeak * unitPrice_offPeak;
    
    return totalCharge;
}

float calServiceCharge(int offPeak, int peak)
{
    int totalUnits;
    float fixedCharge = 0.00;
    
    totalUnits = offPeak + peak;
    
    if (totalUnits <= 150)
    {
        fixedCharge = 600.00;
    }
    if (totalUnits >= 150 && totalUnits <=250)
    {
        fixedCharge = 700.00;
    }
    else
    {
        fixedCharge = 1500.00;
    }
    return fixedCharge;
}
void testCalPayment(void)
{
    assert(fabs(calPayment(50, 60) - 4450.00) < 0.1);
    assert(fabs(calPayment(150, 160) - 17900.00) < 0.1);
}
