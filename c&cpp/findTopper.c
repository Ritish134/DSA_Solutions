#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char name[20];
    int rollNo;
    float cgpa;
}Student;


int findTopper(Student *p,int n){
    float highest = 0;
    int topperIndex ;
    for(int i=0;i<n;i++){
        if(p[i].cgpa>highest){
            highest = p[i].cgpa;
            topperIndex =i;
        }
    }
    return topperIndex;
}

int main (){
    int n,topperIndex;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    Student *p;
    p= (Student *)malloc(n*sizeof(Student));

    if(p==NULL){
        printf("Error:No space");
        exit(0);
    }
    for(int i=0;i<n;i++){
        printf("Enter details of student %d \n",i+1);
        printf("Name:\t");
        getchar();
        scanf("%[^\n]%*c",&p[i].name);
        
        // fgets(p[i].name,20,stdin);
        
        printf("Roll No. :\t");
        scanf("%d",&p[i].rollNo);
        printf("CGPA:\t");
        scanf("%f",&p[i].cgpa);
    }
    topperIndex = findTopper(p,n);
    printf("The details of topper are:\n Name :%s\n Roll no:%d\n CGPA:%.2f\n",p[topperIndex].name,
            p[topperIndex].rollNo,p[topperIndex].cgpa);
    return 0;        

}