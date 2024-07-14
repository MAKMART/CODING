#include <iostream>

double abs(double);

int main(){

  double n;
  std::cout << "Input the number to get the absolute: ";
  std::cin >> n;
  std::cout << '|' << n << '|' << "= " << abs(n);
  return 0;
}

double abs(double n){

  if (n < 0)
  {
    n = n * -1;
  }
  return n;
}