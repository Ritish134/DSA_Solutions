#include <stdio.h>

int main(){
    float x,inches;
    int feet;
    printf("Enter height in centimeters:\n");
    scanf("%f",&x);
    feet= floor(x/30.48);
    inches= (x/30.48-feet)*12;
    printf("Your height  %.0fcm = is %d  feet %.2f inches\n",x,feet,inches);
    return 0;
}