#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char name[20];
    int id;
    int pay;
    char doj[20];
}Employee;

void revisePay(Employee *p ,int n){
    for(int i=0;i<n;i++){
        if(p[i].pay<=20000)
            p[i].pay = p[i].pay + p[i].pay*15/100;
            
        if(p[i].pay>20000 && p[i].pay<= 50000)
            p[i].pay = p[i].pay + p[i].pay*0.1;
    }
}

int main(){
    int n;
    printf("Enter the number of employee : ");
    scanf("%d",&n);
    Employee *p;
    p = (Employee *)malloc(n*sizeof(Employee));

    if(p==NULL){
        printf("Error:No space\n");
        exit(0);
    }

    for(int i=0;i<n;i++){
        printf("Enter details of Employee %d \n",i+1);
        printf("Name:\t");
        getchar();
        
        
         fgets(p[i].name,20,stdin);
        
        printf("ID :\t");
        scanf("%d",&p[i].id);
        printf("DOJ:\t");
        getchar();
        scanf("%[^\n]%*c",&p[i].doj);
        printf("Salary:\t");
        scanf("%d",&p[i].pay);
    }

    revisePay(p,n);
    printf("Name\tID\tRevised Pay\tDOJ\n");
    for(int i =0;i<n;i++){
        printf("%s\t%d\t%d\t  %s\n",p[i].name,p[i].id,p[i].pay,p[i].doj);
    }

}