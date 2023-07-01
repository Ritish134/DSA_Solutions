#include <stdio.h>
#include <string.h>
int main(){
    char s[102];
    scanf("%s",s);
    int n = strlen(s);
    for(int i=0;i<n;i+=2){
        for(int j=0;j<n-2-i;j+=2)
        if(s[j]>s[j+2]){
            int t= s[j];
            s[j]= s[j+2];
            s[j+2]=t;
        }
    }
    printf("%s",s);
}