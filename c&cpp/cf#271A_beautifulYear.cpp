#include <iostream>
#include <cmath>
using namespace std;

bool isDistinct(int year){
    int digits[10] = {0};
    while(year>0){
    int digit = year %10;
    if(digits[digit] == 1){
        return false;
    }
    digits[digit] = 1;
    year/=10;
    }
    return true;
}


int next_distinct_year(int year){
    year++;
    while(!isDistinct(year)){
        year++;
    }
    return year;
}


int main(){
  int y;
  cin >>y;
  int ans = next_distinct_year(y);
  cout <<ans;
  
}
