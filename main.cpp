#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
  double x; //input 
  double y; // ouput 
  
  cin >> x ;
  y= trunc(x);
  cout <<fixed << setprecision(1) ;
  cout << y; 

return 0;
}