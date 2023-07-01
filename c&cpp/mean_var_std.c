#include <stdio.h>
#include <math.h>

int main() {
    int n,A[10],sum=0,k=0;
    float std,mean,var;
    printf("array elements\n");
    scanf("%d",&n);
    printf("start array elements\n");
    for(int i =0;i<n;i++){
        scanf("%d",&A[i]);
        sum += A[i];
    }
    mean = (float)sum/n;

    for(int i=0; i <n;i++){
        k+=pow((A[i]-mean),2);
    }
    var = (float)k/n;
    std= (float)sqrt(var);
    printf("mean is %.2f ,,, var is %.2f,,,std is %.2f",mean,var,std);

    return 0;
}