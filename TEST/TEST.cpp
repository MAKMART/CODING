#include <iostream>

using namespace std;

int main(){

  double n1, n2, R;
  int scelta;
  const char e = 138;
  cout << "Cosa vuoi fare: " << '\n';
  cout << "1 = somma" << '\n' << "2 = differenza" << '\n' << "3 = prodotto" << '\n';
  cin >> scelta;
  cout << "Inserisci il primo numero: ";
  cin >> n1;
  cout << "Inserisci il secondo numero: ";
  cin >> n2;
  
  switch (scelta)
  {
  case 1:
    R = n1 + n2;
    break;
  case 2:
    R = n1 - n2;
    break;
  case 3:
    R = n1 * n2;
    break;
  default:
    cout << "Non è una scelta contemplata!";
    break;
  }
  cout << "Il risultato " << e << ": " << R;
  return 0;
}