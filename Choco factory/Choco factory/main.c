#include <stdio.h>

//Function to calculate the additional charges based on the orde type
float calAdditionalCharges(int orderType, float subTotal);

//Function to calculate the total bill
float calTotalBill(float subTotal, float charges);

int main(void)
{
    int orderType;
    float subTotal = 0.0, additionalCharges = 0.0, totalBill = 0.0;
    
    //prompt user for the subtotal
    printf( "Enter sub total : " );
    scanf( "%f", &subTotal );
    
    //prompt user for the order type
    printf( "\nEnter order type,\n(1 - Dine in)\n(2 - Take a way)\n(3 - Delivery) : " );
    scanf( "%d", &orderType );
    
    additionalCharges = calAdditionalCharges( orderType, subTotal );
    
    totalBill = calTotalBill( subTotal, additionalCharges);
    
    printf( "\nTotal bill amount : %.2f", totalBill );
    
    return 0;
}
float calAdditionalCharges( int orderType, float subTotal )
{
    float taxes, serviceCharge, deliveryCharge, totalCharges;
    
    if( orderType == 1 )
    {
        taxes = subTotal * 0.15;
        serviceCharge = subTotal * 0.1;
        totalCharges = taxes + serviceCharge;
         
    }
    else if( orderType == 2 )
    {
        taxes = subTotal * 0.15;
        totalCharges = taxes;
    }
    else if( orderType == 3 )
    {
        taxes = subTotal * 0.15;
        deliveryCharge = subTotal * 0.05;
        totalCharges = taxes + deliveryCharge;
    }
    else
    {
        printf( "Invalid order type." );
        totalCharges = 0.0;
    }
    return totalCharges;
}
float calTotalBill( float subTotal, float charges )
{
    float totalBill;
    
    totalBill = subTotal + charges;
    
    return totalBill;
}






