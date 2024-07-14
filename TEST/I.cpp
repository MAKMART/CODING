#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>


double Acerchio(double r);
using namespace std;
int main(){
  int j;
  cout << "Inserisci il valore del lato del quadrato";
  cin >> j;
    for (int i = 1; i <= j; i++)
    {
      cout << "+";
    }


    for (int f = 2; f <= j-1; f++)
    {
    cout << '\n';
    cout << "+";
    for (int n = 1; n <= j-2; n++)
    {
     cout << " "; 
    }
    cout << "+";
    cout << '\n';
    }


    for (int i = 1; i <= j; i++)
    {
      cout << "+";
    }
    double r = 5.5;
  
  cout << Acerchio(r);
  return 0;
}

double Acerchio(double r){
  const double PI = M_PI;
  return PI * (r * r);
}