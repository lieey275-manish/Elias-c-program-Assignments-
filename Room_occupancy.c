//Name: Elias Maina
//REG: CT102\G\35062\26

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int occupancy[5][10];
    int occupied;
    int vacant;

    srand(time(NULL));

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 10; j++) {
            occupancy [i][j] = rand() % 2;
        }
    }

    for(int i = 0; i < 5; i++){
        occupied = 0;
        vacant = 0;

        for (int j = 0; j < 10; j++){
            if(occupancy[i][j == 1]){
                occupied++;
            }
            else {
                vacant++;
            }
        }
        printf("Floor %d: Occupied = %d, Vacant = %d \n", i + 1, occupied, vacant);
    }
   return 0;
}
