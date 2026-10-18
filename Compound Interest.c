//Name: Elias Maina
//REG NO: CT102\G\35062\26

#include <stdio.h>
#include <math.h>

int main(){
//compound interest = Amount-principle
double Principle;
double Rate;
double Time;
double Amount;
double Compound_interest;

printf("Enter principle: \t");
scanf("%lf", &Principle);

printf("Enter the rate(%%): \t");
scanf("%lf", &Rate);

printf("Enter time(years): \t");
scanf("%lf", &Time);

Amount = Principle * pow((1 + Rate/100),Time);

Compound_interest = Amount - Principle;

printf("Compound Interest is %lf \n", Compound_interest);

return 0;
}
