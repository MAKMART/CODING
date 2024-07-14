#include <iostream>
#include <ctime>

using namespace std;

int main(){

  int n = 20;
  srand(time(NULL));
  char b = rand() * 255;

  do
  {
    b = rand() * 255;
    cout << b;
    cout << "1" << "0";
  } while (n != 1);
  
  
  
  return 0;
}