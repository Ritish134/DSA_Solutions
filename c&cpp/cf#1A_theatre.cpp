#include <iostream>
#include <cmath>
using namespace std;

int main(){
  cout.precision(22);
  long double n,m,a;
  cin >>n>>m>>a;
  cout << ceil(n/a)*ceil(m/a);
}
