#include <stdio.h>

    double calculateElectricBill(double units) {
        double bill;

        if(units <= 100){
            bill = units * 10;
        }
        else if (units <= 200) {
            bill = (100 * 10) + ((units - 100) * 15);
        }
        else{
            bill = (100 * 10) + ((units - 100) * 15) +((units - 200) * 20);
            }

            return bill;
    }

    int main(){

    double units;
    double totalBill;

    printf("Enter unit consumed: \t");
    scanf("%lf", &units);

    totalBill = calculateElectricBill(units);

    printf("Total electric bill = ksh %.2lf \n", totalBill);

    return 0;
}
