#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int day;
    int month;
    int year;
}Date;

Date nextDay(Date d){
    Date n;
    if(d.month != 12){
        printf("Invalid,accepted only date of December!!\n");
        exit(0);
    }
    else if(d.day>31 || d.day<1){
        printf("INVALID Date!!\n");
        exit(0);
    }
    else{
        if(d.day==31){
            n.day=1;
            n.month=1;
            n.year=d.year+1;
        }
        else{
            n.day=d.day+1;
            n.month=d.month;
            n.year=d.year;
        }
    }
    return n;
}

int main(){
    Date d,n;
    printf("Enter the date: ");
    scanf("%d/%d/%d",&d.day,&d.month,&d.year);
    n= nextDay(d);
    printf("Next day of %d/%d/%d is %d/%d/%d\n",d.day,d.month,d.year,n.day,n.month,n.year);
    return 0;
}