#include <iostream>
using namespace std;

int main(){

  int n, r[10];
  do
  {
    cout << "Dammi un numero in base 10: ";
    cin >> n;
  } while (n <= 0);
  

  
  for (int i = n; i != 0; i++)
  {
    r[i] = n % 2;
    i = (i - r[i]) / 2;
  }
  
  for (int i = sizeof(r[1]) / sizeof(int); i == 0; i--)
  {
    cout << r[i];
  }
  
  return 0;
}