#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    int sum =0;
    cin >>a >>b >>c;
    for(int i=1;i<=c;i++){
        sum = sum + a*i;
    }
    if(sum-b>=0){
    cout << sum-b;
    }
    else{
        cout <<0;
    } 
}
