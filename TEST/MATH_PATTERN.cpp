#include <iostream>

using namespace std;
int main(){
  int const c = 1000;
  float n, n1 = 0;
  bool b, v;
  int r, a[c + 1];

  cout << "Enter a number: ";
  cin >> n;  
  switch (int(n))
  {
  case 1:
    b = true;
    break;
  case 2:
    b = false;
    break;
  case 4:
    v = true;
    break;
  case 8:
    v = false;
  break;
  }
 for (int i = 0; i <= c; i++)
 {
  r = int(n) % 2;
  if (r == 0)
  {
    n = n / 2;
    a[i] = n;
  }
  else
  {
    n = n * 3 + 1;
    a[i] = n;
  }
 }
 if (!v && v)
 {
  for (int s = 0; s <= c; s++)
  {
    if ((a[s] == 2) && (a[s + 1] == 1) && (a[s + 2] == 4))
    {
      break;
    }
    else
    {
      n1++;
    }
    
  }
 }
 else if (b)
 {
  for (int s = 0; s <= c; s++)
  {
    if ((a[s] == 4) && (a[s + 1] == 2) && (a[s + 2] == 1))
    {
      break;
    }
    else
    {
      n1++;
    }
    
  }
 }
 else if (!b)
 {
  for (int s = 0; s <= c; s++)
  {
    if ((a[s] == 4) && (a[s + 1] == 2) && (a[s + 2] == 1))
    {
      break;
    }
    else
    {
      n1++;
    }
    
  }
 }
 else
 {
  for (int s = 0; s <= c; s++)
  {
    if ((a[s] == 2) && (a[s + 1] == 1) && (a[s + 2] == 4))
    {
      break;
    }
    else
    {
      n1++;
    }
    
  }
 }
 
 //display the array
  for (int i = 0; i <= c; i++)
 {
  cout << a[i] << " ";
 }
 
 if (b)
 {
  cout << '\n' << "Numero di iterazioni fatte prima del pattern: " << n1 - 2 << '\n';
 }
 else
 {
  cout << '\n' << "Numero di iterazioni fatte prima del pattern: " << n1 + 1 << '\n';
 }
 
 
 
  return 0;
}
