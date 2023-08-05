#include <iostream>
using namespace std;

int main(){
    int n;
    cin >>n;
    int a;
    while(n--){
        cin >>a;
        if(a==1){
            cout<<"HARD";
            break;
        }
    }
    if(a!=1){
        cout<<"EASY";
    }
    
}
