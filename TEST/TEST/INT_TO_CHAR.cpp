#include <iostream>
#include <ctime>

using namespace std;

int main(){

  srand(time(NULL));
  int f, n;
  char i;
  cin >> f;

  do
  {
    n = rand() * 10;
    i = n;
    cout << i;
  } while (n != f);
  
  return 0;
}