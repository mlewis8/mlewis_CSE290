#include <iostream>

int main() {
  const int size = 5;
  int simpleArray[size] = {7,8,10,3,18};
  int max = simpleArray[0];
  std::cout << max << std::endl; 
  for (int i = 1; i < size; ++i) {
    if ( simpleArray[i] > max) {
      max = simpleArray[i];
    }
  }

  std::cout << "The maximum values is " << max << std::endl;

}