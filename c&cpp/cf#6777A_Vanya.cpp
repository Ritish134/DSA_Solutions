#include <iostream>
using namespace std;

int main(){
    int n,p,count=0;;
    cin >>n>>p;
    while(n--){
        int a;
        cin >>a;
        if(a>p){
            count+=2;
        }
        else{
            count+=1;
        }
    }
    cout << count;
}
