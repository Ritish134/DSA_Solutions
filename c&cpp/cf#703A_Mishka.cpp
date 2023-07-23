#include <iostream>
#include <cmath>
using namespace std;

int main(){
   int t;
   cin >>t;
   int m1=0;
   int c1=0;
   while(t--){
       int m,c;
       cin >>m>>c;
       if(m>c){
           m1++;
       }
       else if(m<c){
           c1++;
       }
    }
       if(m1 > c1){
           cout << "Mishka";
       }
       else if(m1 < c1){
           cout << "Chris";
       }
       else{
           cout<<"Friendship is magic!^^";
       }
}
