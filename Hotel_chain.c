//Name: Elias Maina
//REG NO: CT100/G/35062/26

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int chain[3][5][10];
    int TotalOccupiedRoom;

    for (int b = 0; b < 3; b++){
        for (int f = 0; f < 5; f++){
            for ( int r = 0; r < 10; r++){
                chain[b][f][r] = rand() % 2;

                if (chain[b][f][r] == 1){
                    TotalOccupiedRoom++;
                }
            }
        }

        printf("Total occupied rooms across all branches: %d \n", TotalOccupiedRoom);
    }
    return 0;
}
