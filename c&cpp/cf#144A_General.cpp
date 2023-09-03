#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int n,maxHeight=0,minHeight=99,maxPos,minPos,x;
  cin >> n;
  for(int i=1;i<=n;i++){
      cin >>x;
      if(x>maxHeight){
          maxHeight = x;
          maxPos = i;
      }
      if(x<=minHeight){
          minHeight = x;
          minPos = i;
      }
  }
  
  cout << maxPos + n - 1 - minPos - (maxPos>minPos);
  
}
