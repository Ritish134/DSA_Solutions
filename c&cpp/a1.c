// #include <stdio.h>

// typedef struct {
//     char code[6];
//     char title[50];
//     int credit;
//     int n;
// } courseRec;

// int main(){
//     courseRec subj;
//     printf("Subj code:\n");
//     scanf("%s", subj.code);
//     printf("Enter number of students : \n");
//     scanf("%d", &subj.n);
//     subj.credit = 6;
//     printf("Title\n");
//     getchar();
//     // fgets(subj.title,50,stdin);
//     gets(subj.title);
//     printf("%s\t%s\t%d\t%d\n",subj.code,subj.title,subj.credit,subj.n);
//     return 0;
// }

// #include <stdio.h>

// int main(){
//     FILE *in;
//     in = fopen("Input.txt","r");
//     // in == NULL cant open;
//     while(!feof(in)){
//         scanf()
//     }
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main(){
//     int n , *p,max;
//     printf("Enter the number of students to store in array : ");
//     scanf("%d",&n);
//      p = (int *)malloc(n*sizeof(int));
//      printf("Enter the elements:\n");
//      for(int i= 0;i<n;i++){
//         scanf("%d",&p[i]);
//         max= p[0];
//      }
//      int j = 0;
//      while(j < n){
//         max = (max < p[j] )? p[j] : max;
//         j++;
//      }
//      printf("Maximum element in array is %d\n",max);
//      free(p);
//      return 0;

// }

// #include <stdio.h>

// void get_prime_factors(int num) {
//   int i;
//   for (i = 2; i <= num; i++) {
//     while (num % i == 0) {
//       printf("%d ", i);
//       num /= i;
//     }
//   }
// }

// int main() {
//   int num;
//   printf("Enter a number: ");
//   scanf("%d", &num);
//   printf("Prime factors of %d: ", num);
//   get_prime_factors(num);
//   return 0;
// }

// #include <math.h>
// #include <stdio.h>

// void get_unique_prime_factors(int num) {
//   int i;
//   for (i = 2; i <= sqrt(num); i++) {
//     if (num % i == 0) {
//       printf("%d ", i);
//       while (num % i == 0) {
//         num /= i;
//       }
//     }
//   }
//   if (num > 2) {
//     printf("%d ", num);
//   }
// }

// int main() {
//   int num;
//   printf("Enter a number: ");
//   scanf("%d", &num);
//   printf("Prime factors of %d: ", num);
//   get_unique_prime_factors(num);
//   return 0;
// }

// #include <stdio.h>

// int gcd(int x,int y){
//     if(y==0)
//         return x;
//     return gcd(y,x%y);
// }
// int main(){
//     int x,y;
//     printf("Enter\n");
//     scanf("%d %d", &x,&y);
//     printf("GCD is : %d ",gcd(x,y));
//     return 0;
// }

// #include <math.h>
// #include <stdio.h>

// void get_unique_prime_factors(int num) {
//   int i;           // <=6
//   for (i = 2; i <= sqrt(num); i++) { // i=2,3
//     if (num % i == 0) { // 36%2==0
//       printf("%d ", i); // 2,3
//       while (num % i == 0) { // true
//         num /= i;  // num = 36/2 = 18  , num = 18/3 = 6 , num = 1
//       }
//     }
//   }
//   if (num > 2) {
//     printf("%d ", num);
//   }
// }

// int main() {
//   int num;
//   printf("Enter a number: ");
//   scanf("%d", &num);
//   printf("Prime factors of %d: ", num);
//   get_unique_prime_factors(num);
//   return 0;
// }

// #include <math.h>
// #include <stdio.h>

// void get_unique_prime_factors(int num) {
//   int i;
//   for (i = 2; i <= sqrt(num); i++) {
//     if (num % i == 0) {
//       printf("%d ", i);
//       num /= i;
//       i--;
//     }
//   }
//   if (num > 2) {
//     printf("%d ", num);
//   }
// }

// int main() {
//   int num;
//   printf("Enter a number: ");
//   scanf("%d", &num);
//   printf("Prime factors of %d: ", num);
//   get_unique_prime_factors(num);
//   return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int *p;
void prime(int n)
{
    int i, j, k = 0, isPrime = 0;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            isPrime = 1;
            for (j = 2; j < i / 2; j++)
            {
                if (i % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime == 1)
            {
                p[k] = i;
                k++;
            }
        }
    }
}

int main()
{
    int i = 0, n;
    printf("Enter number to find factors :  ");
    scanf("%d", &n);
    p = (int *)calloc(n / 2, sizeof(int));
    prime(n);
    if (p[0] == 0)
        printf("%d is a prime number\n", n);
    else
    {
        printf("The prime factors of %d \n", n);
        while (p[i] != 0)
        {
            printf("%d\n", p[i]);
            i++;
        }
        printf("\n");
    }
    free(p);
    return 0;
}