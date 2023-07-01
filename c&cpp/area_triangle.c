#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,s,area;
    printf("enter 3 sides of triangle\n");
    scanf("%f %f %f",&a,&b,&c);
    s= (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area of triangle is %.2f sq unit",area);
    return 0;
}