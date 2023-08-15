#include <iostream>
#include <set>
using namespace std;


int main(){
    set<int> a;
    int k=4;
    while(k--){
        int n;
        cin>>n;
        a.insert(n);
    }
    cout << 4-a.size();
    
    
}
