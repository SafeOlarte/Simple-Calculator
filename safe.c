#include <stdio.h>

int main(){
    int number;
    int number1;

    float addition;
    float subtraction;
    float multiplication;
    float division;


    printf("Enter First Number: ");
    scanf("%d", &number);

    printf("Enter Second Number: ");
    scanf("%d", &number1);

    printf("--------The Result--------");

      printf("\nAddition: %d", number + number1);
    printf("\nSubtraction: %d", number - number1);
    printf("\nMultiplication: %d", number * number1);
        printf("\nDivision: %d", number / number1);
        
   

    return 0;
}