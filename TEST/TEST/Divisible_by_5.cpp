#include <iostream>

bool bo(int);

int main(){

  int n;
  std::cout << "1 = true" << '\n';
  std::cout << "0 = false" << '\n';
  std::cout << "Immetti n: ";
  std::cin >> n;
  std::cout << bo(n);
  return 0;
}

bool bo(int n){

  if ((n % 5) == 0)
  {
    return true;
  }
  return false;
}