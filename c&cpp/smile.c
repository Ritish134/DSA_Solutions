#include<stdio.h>

void main()
{
    int i;
    char ch=1; //ASCII value for smiling face is 1

    for(i=0;i<20000;i++)
    {
        printf("%c", ch);
    }
    
}