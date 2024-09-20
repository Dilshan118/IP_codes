/*
 
 Suwasetha Hospital provides different types of accommodation facilities for their inpatients.
 The details are given below.
 
 Accommodation Type Description The Charge Per Day (Rs.)
 1 Deluxe Room 17000/=
 2 Grand Deluxe 25000/=
 3 Grand Suite 32000/=
 
 a) Write a function called calcPayment() to calculate and return the payment of an inpatient
 when the medical charge, the accommodation type, and no. of days stayed are passed as the
 parameters of the function.
 
 Payment = Medical charge + Accommodation facility charge
 
 Function prototype is given below.
 
  float calcPayment(float medicalCharge, int type, int days)
 
 b) The hospital has decided to offer several discounts for their inpatients.
 
 • If the inpatient is a senior citizen, a discount of 5% will be given.
 • If the inpatient is a loyalty member of the hospital, a discount of 10% will be given.
 
 Write a function called calcDiscount() to calculate and return the discount amount when the
 following are passed as the parameters.
 
 • If the inpatient is a senior citizen, value Y will be passed to the function and otherwise,
 value N will be passed.
 • If the inpatient is a loyalty member of the hospital, value Y will be passed to the function
 and otherwise, value N will be passed.
 
 Discount = Payment * Total discount / 100
 
 The function prototype is given below.
 
 float calcDiscount(char seniorCitizen, char loyaltyMember)
 
 c) Write a function called testCalcPayment() which contains two assert statements to debug
 the implemented calcPayment() function.
 
 d) In your main function do the following,
 
 i. Call testCalcPayment() function.
 ii. Allow the user to enter the medical charge, the accommodation type, and no. of days stayed from the keyboard.
 Call function calcPayment()
 
 iii. From the keyboard, allow the user to enter whether the inpatient is a senior citizen
 and whether the inpatient is a loyal member of the hospital.
 Call function
 calcDiscount().
 iv. Calculate and display the net hospital payment of an inpatient.
 
 Net hospital payment = Payment – Discount amount
 
 v. Input the relevant details of five inpatients from the keyboard, calculate and print
 the net hospital payment of each inpatient.
 
 */


#include <stdio.h>
#include <assert.h>
#include <math.h>

float calcPayment (float medicalCharge, int type, int days);

float calcDiscount (char seniorCitizen, char loyalityMember);

void testCalcPayment (void);

int main (void)
{
    int type, no_of_days;
    float medical_charge;
    float payment_before_discount = 0;
    float discount = 0;
    char loyality, citizen;
    float Net_hospital_payment = 0;
    
    testCalcPayment ();
    
    printf("Enter the type of the accomodation(1,2 or 3) : ");
    scanf("%d", &type);
    
    printf("Enter the medical charge of the patiant : ");
    scanf("%f", &medical_charge);
    
    printf("Number of days stayed : ");
    scanf("%d", &no_of_days);
    
    payment_before_discount = calcPayment(medical_charge, type, no_of_days);
    
    printf("Is patient a senior citizen (Y or N) : ");
    scanf(" %c", &citizen);
    
    printf("Is patient a loyality costomer (Y or N) : ");
    scanf(" %c", &loyality);
    
    discount = calcDiscount(citizen, loyality);
    
    Net_hospital_payment = payment_before_discount - (payment_before_discount * discount);
    
    printf("Net hospital payment is : %.3f\n", Net_hospital_payment);
    
    return 0;
    
}

float calcPayment (float medicalCharge, int type, int days)
{
    float charge_per_day = 0, payment = 0;
    
    if (type == 1)
    {
        charge_per_day = 17000.00;
    }
    else if(type == 2)
    {
        charge_per_day = 25000.00;
    }
    else if(type == 3)
    {
        charge_per_day = 37000.00;
    }
    
    payment = medicalCharge + (charge_per_day * days);
    
    return payment;
}

float calcDiscount (char seniorCitizen, char loyalityMember)
{
    float discount = 0;
    
    if (seniorCitizen == 'Y')
    {
        discount = 0.05;
    }
    if (loyalityMember == 'Y')
    {
        discount = discount + 0.1;
    }
    return discount;
}
void testCalcPayment (void)
{
    assert(fabs(calcPayment(10000.00, 1, 10) - 180000.00) < 0.01 );
    assert(fabs(calcPayment(30000, 2, 20) - 530000.00) < 0.01);
    assert(fabs(calcPayment(20000, 3, 4) - 168000.00) < 0.01);
}
