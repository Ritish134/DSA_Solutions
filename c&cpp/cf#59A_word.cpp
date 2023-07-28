#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    int upperCount=0,lowerCount=0;
    for(int i=0;i<s.size();i++){
        if(isupper(s[i])){
            upperCount++;
        }
        else{
            lowerCount++;
        }
    }
    if(upperCount>lowerCount){
        for(int i=0;i<s.size();i++){
            s[i] = toupper(s[i]);
            cout << s[i];
        }
    }
    else{
        for(int i=0;i<s.size();i++){
            s[i] = tolower(s[i]);
            cout << s[i];
        }
    }
    
}
