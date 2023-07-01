#include <stdio.h>

void crazy(char s[]){
    int i =0;
    while(s[i] != '\0'){
        if(s[i]>='A'&& s[i] <= 'Z'){
            s[i] = '&';
        }
        else if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] = '#';
        }
        i++;
    }
}

// Method 2

    // #include <ctype.h>
    // void crazy(char s[]){
    //     int i =0;
    //     while(s[i]!= '\0'){
    //         if(isupper(s[i]))
    //             s[i] = '&';
    //         else if(islower(s[i]))
    //             s[i] = '#';
    //         i++;        
    //     }
    // }




int main(){
    char z[100];
    printf("Enter a string : ");
    scanf("%s",z);
    crazy(z);
    printf("Modified string : %s",z);
    return 0;
}