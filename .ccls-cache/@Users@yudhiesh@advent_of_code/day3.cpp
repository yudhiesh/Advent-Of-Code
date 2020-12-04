#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>

int main() {
  std::string string;
  int positionX = 0;
  int trees = 0;
  std::ifstream file("day3.txt", std::ios::in);
  if (file.is_open()) {
    std::getline(file, string);
    while (!file.eof()) {
      std::getline(file, string);
      positionX += 3;
      if (positionX >= 31)
        positionX -= 31;
      if (string[positionX] == '#')
        trees++;
    }
  }
  file.close();
  std::cout << trees << std::endl;
}
