#include <stdio.h>
int sum3(int n){
    if(n==0)
        return 0;
    return n*n*n + sum3(n-1);    
}

int main(){
    int n;
    printf("Enter a value for n: ");
    scanf("%d",&n);
    printf("Sum of cubes of first %d natural numbers is : %d ", n,sum3(n));
    return 0;
}