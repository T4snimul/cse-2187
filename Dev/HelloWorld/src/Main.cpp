#include <iostream> // for input/output operations

void Log(const char *message);

int main()
{
  // Print "Hello World!" to the console followed by a newline
  Log("Goodbye World"); // what happened here is 'linking' which didn't require us to import the Log function

  // Wait for user input before closing the program
  std::cin.get();
}
