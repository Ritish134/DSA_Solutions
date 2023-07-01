#include <stdio.h>
#include <math.h>

typedef struct{
    int real;
    int img;
}ComplexNo;

float findMagnitude(ComplexNo c){
    float magnitude;
    magnitude = sqrt(c.real*c.real + c.img*c.img);
    return magnitude;
}

int main(){
    ComplexNo a;
    float magnitude;
    printf("Enter the real part : ");
    scanf("%d",&a.real);
    printf("Enter the imaginary part : ");
    scanf("%d",&a.img);
    magnitude = findMagnitude(a);
    printf("The magnitude of %d+%di is %.2f\n",a.real,a.img,magnitude);
    return 0;
}