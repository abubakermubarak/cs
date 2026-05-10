#include "cs50.h"
#include <math.h>
#include <stdio.h>
//Macros
#define NORMAL_HOURS 40
#define ATTENDENCE_DAYS 22
#define SALES_TARGET 30
//Prototypes
float get_hours(void);
float get_rate(void);
unsigned int get_sales(void);
unsigned int get_days(void);
float get_tax(float salary);

int main(void)
{
    //Prompt user to enter his name, working hours and rate
    string name = get_string("Enter employer name: ");
    float hours = get_hours();
    float rate = get_rate();
    unsigned int  sales = get_sales();
    unsigned int working_days = get_days();
    //Calculate salary
    float basic_salary = (hours > NORMAL_HOURS) ? NORMAL_HOURS *  rate : hours * rate;
    float over_pay = (hours > NORMAL_HOURS) ? (hours - NORMAL_HOURS) * 1.5 * rate : 0;
    float sales_bonus = (fmax(sales , SALES_TARGET) - SALES_TARGET) * 10;
    float attendence_bonus = (fmax(working_days , ATTENDENCE_DAYS) - ATTENDENCE_DAYS) * 5;
    float salary_without_tax = basic_salary + over_pay + attendence_bonus + sales_bonus;
    float tax = get_tax(salary_without_tax);
    float total_salary = salary_without_tax - tax;
    printf("\n=====================================\n");
    printf("              SALATY REPORT          \n");
    printf("=====================================\n");
    printf("Employer Name: %s\n", name);
    printf("Working Hours: %.0f\n", hours);
    printf("Hourly Rate: %.0f\n\n\n", rate);
    printf("Basic Salary: %.2f\n" , basic_salary);
    printf("Overtime  Pay: %.2f\n", over_pay);
    printf("Target Bouns: %.2f\n", sales_bonus);
    printf("Attendene Bonus: %.2f\n", attendence_bonus);
    printf("Tax: - %.2f\n", tax);
    printf("--------------------------------------\n");
    printf("Total Salary: %.2f\n", total_salary);
    printf("=======================================\n");
}
//Get working hours from Employer
float get_hours(void)
{
    float hours;
    do
    {
        hours = get_float("Enter working hours: ");
    } while (hours < 0);
    return hours;
}
//Get hourly rate
float get_rate(void)
{
    float rate;
    do
    {
        rate = get_float("Enter hourly rate: ");
    } while (rate < 1);
    return rate;
}
//Get saled unit
unsigned int get_sales(void)
{
    unsigned int sales;
    do
    {
        sales = get_int("Enter saled units this month: ");
    } while (sales < 0);
    return sales;
}
//Get working days
unsigned int get_days(void)
{
    //working says should not exceed 31
    unsigned int days;
    do
    {
        days = get_int("Enter working days in month: ");
    } while (days < 0 || days > 31);
    return days;
}
//Cut 10% if salary greater than  1000
float get_tax(float salary)
{
    return (salary > 1000) ? salary * 0.1 : 0;
}
