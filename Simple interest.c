//Nmae: Elias Maina
//CT102/G/35062/26

#include <stdio.h>
int main(){

double Simpleinterest;
double princple;
double rate;
double time;

printf("Enter the principle amount: \t");
scanf("%lf", &princple);

printf("Enter time (in years): \t ");
scanf("%lf", &time);

printf("enter rate (%%): \t");
scanf("%lf", &rate);

Simpleinterest = (princple * rate * time)/100.0;

printf("Simple Interest is %lf \n" , Simpleinterest);

return 0;
}
