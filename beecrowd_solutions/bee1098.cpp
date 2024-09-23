// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1098

#include <iostream>

int main() {
  float i = 0;
  float j = 1;
  while (i <= 2.1) {
    std::cout << "I=" << i << " "
         << "J=" << j + i << "\n";
    std::cout << "I=" << i << " "
         << "J=" << j + 1 + i << "\n";
    std::cout << "I=" << i << " "
         << "J=" << j + 2 + i << "\n";
    i += 0.2;
  }
  return 0;
}