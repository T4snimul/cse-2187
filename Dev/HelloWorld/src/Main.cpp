#include <iostream> // for input/output operations

// void Log(int val);
// int Multiply(int a, int b);

int main()
{
  // Log(Multiply(2, 3)); // what happened here is 'linking' which didn't require us to import the Log function
  // unsigned int variable = 8;
  // Data types: char, int, short, long, long long, float (4 bytes), double (4 bytes), long double
  // std::cout << variable << std::endl;
  // variable = 20;
  int variable = false;
  std::cout << sizeof variable << std::endl;
  // Wait for user input before closing the program
  std::cin.get();
}
