/*This is program to calculate net salary.
Name: Joseph Maitha
REF NO: CT101/G/22636/24
Date of coding: 7/11/2024*/
#include <stdio.h>

float calculate_tax(float grossPay) {
    if (grossPay <= 600) {
        return grossPay * 0.15;
    } else {
        return grossPay * 0.20;
    }
}

int main() {
    int hours_worked;
    float hourly_wage;
    float grossPay;
    float netPay;
    int overHours;
    float overPay;

    printf("Please enter hours worked:\n");
    scanf("%d", &hours_worked);

    printf("Please enter your hourly wage:\n");
    scanf("%f", &hourly_wage);

    float regularPay = hours_worked * hourly_wage;
    overHours = (hours_worked > 40) ? hours_worked - 40 : 0;
    overPay = overHours * hourly_wage * 1.5;

    if (hours_worked <= 40) {
        grossPay = regularPay;
    } else {
        grossPay = regularPay + overPay;
    }

    float taxAmount = calculate_tax(grossPay);
    netPay = grossPay - taxAmount;

    printf("Hours worked: %d\n", hours_worked);
    printf("Hourly wage: %.2f\n", hourly_wage);
    printf("Gross pay: %.2f\n", grossPay);
    printf("Tax: %.2f\n", taxAmount);
    printf("Net pay: %.2f\n", netPay);

    return 0;
}
