//Name: Elias Maina
//REG NO:CT102/G/35062/26
#include <stdio.h>

 int main() {

 int Age; //%d
 double income; //%lf

 printf("Enter the age: \t");
 scanf("%d", &Age);

 printf("Enter the value of income: \t");
 scanf("%lf", &income);

 if(Age >= 21 && income >= 21000){
    printf("You qualify for a loan, \n");}
 else {
    printf("Unfortunately we are unable to offer you a loan at this time. \n");
 }

 return 0;
 }
