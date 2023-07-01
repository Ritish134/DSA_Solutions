#include <stdio.h>
int main(){
    float D,c;
    printf("enter farenheit temperature:\n");
    scanf("%f",&D);
    c= 5.0/9*(D-32);
    printf("temperature in celsius is %.3f",c);
    return 0;

}