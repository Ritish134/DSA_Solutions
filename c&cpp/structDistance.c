#include <stdio.h>
#include <math.h>

typedef struct{
    float x;
    float y;
}Point;

float distance(Point p1,Point p2){
    return sqrt(pow(p2.x-p1.x,2)+ pow(p2.y-p1.y,2));
}

Point midpoint(Point p1,Point p2){
    Point mid;
    mid.x = (p1.x + p2.x)/2;
    mid.y = (p1.y + p2.y)/2;
    return mid;
}

int main(){
    Point p1 ,p2;
    printf("Enter first coordinates\n");
    scanf("%f %f",&p1.x,&p1.y);
    printf("Enter second coordinates\n");
    scanf("%f %f",&p2.x,&p2.y);

    float dist = distance(p1,p2);
    printf("Distance between p1 and p2 is %.2f\n",dist);

    Point mid = midpoint(p1,p2);
    printf("The midpoint is (%.2f , %.2f)\n",mid.x,mid.y);
    return 0;
}