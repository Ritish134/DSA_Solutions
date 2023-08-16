#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int n;
  cin >>n;
  
  string feeling = "";
  for(int i=0;i<n;i++){
      if(i%2==0){
          feeling += "I hate ";
      }
      else{
          feeling += "I love ";
      }
      if(i != n-1){
          feeling += "that ";
      }
  }
  feeling += "it";
  cout << feeling;
}
