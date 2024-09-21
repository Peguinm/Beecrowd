// Pedro Ozório
// BEE ID: 974026
// Problem link https://judge.beecrowd.com/pt/problems/view/1050

#include <iostream>
#include <map>
#include <stdio.h>
#include <string>
#include <time.h>


int main() {
  std::map<std::string, int> map;
  int ddd;

  map["Brasilia"] = 61;
  map["Salvador"] = 71;
  map["Sao Paulo"] = 11;
  map["Rio de Janeiro"] = 21;
  map["Juiz de Fora"] = 32;
  map["Campinas"] = 19;
  map["Vitoria"] = 27;
  map["Belo Horizonte"] = 31;

  std::cin >> ddd;
  bool found = false;

  for (auto &item : map) {
    if (item.second == ddd) {
      std::cout << item.first << "\n";
      found = true;
      break;
    }
  }

  if (!found) {
    std::cout << "DDD nao cadastrado"
              << "\n";
  }

  return 0;
}