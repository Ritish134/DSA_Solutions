#include <iostream>
#include <set>
#include <string>
using namespace std;


int main(){
    string str;
    set<char> ans;
    getline(cin,str);
    
    for(int i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z')
        ans.insert(str[i]);
    }
    cout<<ans.size();
    
    
    
}   
