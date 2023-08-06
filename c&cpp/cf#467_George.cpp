#include <iostream>
using namespace std;

int main(){
    int n;
    int c=0;
    cin >>n;
    while(n--){
        int a,b;
        cin >>a>>b;
        if(b-a>=2){
            c++;
        }
    }
    cout<<c;
}
