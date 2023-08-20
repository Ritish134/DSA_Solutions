#include <iostream>
#include <set>
#include <string>
using namespace std;


int main(){
    int n;
    string a;
    cin >> n>>a;
    set<char> s;
    if(n<26){
        cout<< "NO";
        return 0;
    }
    for(int i=0;i<n;i++){
        a[i] = tolower(a[i]);
        s.insert(a[i]);
    }
    if(s.size()<26){
        cout<<"NO";
    }
    else{
        cout <<"YES";
    }
    
}   
