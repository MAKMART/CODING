#include <iostream>
#include <cmath>
#include <iomanip>
#define USE_MATH_DEFINES_

float fact(int n);
int main(){

  float e;
  for (int i = 0; i < 10000; i++)
  {
    e = e + 1/fact(i);
  }
  std::cout << std::setprecision(121575299) << e;
  return 0;
}
float fact(int n){
  return (n==1 || n==0) ? 1: n * fact(n - 1);
}