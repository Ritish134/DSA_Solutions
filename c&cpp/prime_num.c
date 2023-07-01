#include <stdio.h>


int main()
{
    int num,max=300,i,flag;
    printf("Prime numbers between 1 to 300 are:\n  ");
    
    for(num=2;num<=300;num++){
        flag=0;
        for(i=2;i<=sqrt(num);i++){
            if(num%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            printf("%d\t",num);
        }
    }
    
   
    return 0;
}