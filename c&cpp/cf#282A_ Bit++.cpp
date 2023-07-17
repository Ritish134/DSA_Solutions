#include <iostream>
using namespace std;
int main(){
    int n,k=0;
    cin >> n;
    while(n--){
        char a[100];
        cin >> a;
        if(a[1]=='+'){
            k++;
        }
        else{
            k--;
        }
    }
    cout <<k;
}
