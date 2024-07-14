#include <iostream>

using namespace std;

int main(){

  int eta;
  const char a = 133;
  const char sterlina = 156; //Non trovavo l'€  :(
  cout << "Inserisci l'et" << a << ": ";
  cin >> eta;

  if (eta <= 3)
  {
    cout << "Gratis!";
  }
  else if ((eta >= 4)&&(eta <= 10))
  {
    cout << "5" << sterlina;
  }
  else if ((eta >= 11)&&(eta <= 19))
  {
    cout << "7" << sterlina;
  }
  else if ((eta >= 20)&&(eta <= 50))
  {
    cout << "10" << sterlina;
  }
  else
  {
    cout << "6" << sterlina;
  }
  
    
  return 0;
}