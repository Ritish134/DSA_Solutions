#include <iostream>
#include <set>
using namespace std;


int main(){
    set<int> a;
    int p;
    cin >>p;
    int n;
    cin >>n;
    while(n--){
        int w;
        cin >>w;
        a.insert(w);
    }
    int k;
    cin >>k;
    while(k--){
        int w;
        cin >>w;
        a.insert(w);        
    }
    if(p-a.size()==0){
        cout << "I become the guy.";
    }
    else{
        cout << "Oh, my keyboard!";
    }
    
    
}
