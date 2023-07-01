#include <stdio.h>
int main(){
    int s=31558150,h,d,m,r,sec;
    d= s/86400;
    r= s%86400;
    h= r/3600;
    r= r%3600;
    m= r/60;
    r =r%60;
    sec=r%60;
    printf("Earth takes %d days , %d hours,%d minutes,%d seconds in one revolution", d,h,m,sec);
    return 0;
}