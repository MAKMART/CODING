#include <iostream>

bool Gamble(float, int, float);

int main(){

  float prob, pay;
  int prize;

  std::cout << "Input a prize: ";
  std::cin >> prize;
  std::cout << "Input a probability: ";
  std::cin >> prob;
  std::cout << "Input how much you pay: ";
  std::cin >> pay;
  std::cout << Gamble(prob, prize, pay);
  return 0;
}

bool Gamble(float prob, int prize, float pay){

  if ((prob * prize) > pay)
  {
    return true;
  }
  return false;
}