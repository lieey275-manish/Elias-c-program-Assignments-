//Name: Elias Maina
//REG NO: CT102/G/35062/26

#include <stdio.h>

double calculateFare(double distance) {
double fare_ratePerKM = 50;
return distance * fare_ratePerKM;
}
int main(){

    double distance_covered;
    double fare;

     printf("Enter distance covered (Km): \t");
     scanf("%lf", &distance_covered);

     fare = calculateFare(distance_covered);

    printf("Total Fare: Ksh. %.2lf \n", fare);
    return 0;
}
