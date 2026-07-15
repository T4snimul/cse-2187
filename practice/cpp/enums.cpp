#include <iostream>

enum Example
{
  A,
  B,
  C
};

int main()
{
  Example value = B;
  std::cout << value << std::endl;
  std::cin.get();
}
