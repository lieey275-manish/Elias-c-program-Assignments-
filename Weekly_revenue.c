//Name: Elias Maina
//REG: CT102\G\35062\26
#include <stdio.h>

int main(){
    double revenue[7];
    double Totalrevenue = 0.0;
    double Average_revenue;

    printf("-----Weekly updates Revenue----\n");

    for(int i =0; i < 7; i++){
        printf("Enter revenue for day %d \t", i + 1);
        scanf("%lf", &revenue[i]);

        Totalrevenue += revenue[i];
    }
    Average_revenue = Totalrevenue / 7.0;

     printf("----Results-------\n");
     printf("Total weekly Revenue: Ksh %.2lf \n", Totalrevenue);
     printf("Average daily revenue: ksh %.2lf \n", Average_revenue);

    return 0;
}
