#include <iostream>

float Area(float, float);

int main(){
  float h, w;
  std::cout << "Input the width: ";
  std::cin >> w;
  std::cout << "Input the height: ";
  std::cin >> h;
  std::cout << "The area is: " << Area(h, w);
  return 0;
}

float Area(float h,float  w){
  if ((h >= 0) && (w >= 0))
  {
    return h * w;
  }
  
  return false;
  
}