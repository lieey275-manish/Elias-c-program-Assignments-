#include <stdio.h>
#include <string.h>

int main(){
    char password[50];

    do{
        printf("Enter the password: \t");
        scanf("%s", &password);

        if (strcmp(password, "1234") != 0) {
            printf("Incorrect password. Try again. \n");
        }
    }
    while(strcmp(password, "1234") != 0);
    printf("Access granted \n");
    return 0;
}
