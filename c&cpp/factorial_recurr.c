#include <stdio.h>
int fibo(int i);
int main(){
    int i,m;
    for(int i=1;i<=10;i++){
       m = fibo(i);
        printf(" fibo no are: %d\n",m);
    }
    return 0;
}
fibo( i){
        if(i==1){
            return 0;
        }
        else if (i==2){
            return 1;
        }
        else{
            return fibo(i-2)+fibo(i-1);
        }

    }
