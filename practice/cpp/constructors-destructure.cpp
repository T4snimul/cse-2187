#include <iostream>

class Entity
{
public:
  float X, Y;

  Entity(float x, float y)
  {
    X = x;
    Y = y;
    std::cout << "Entity Created!" << std::endl;
  }

  ~Entity()
  {
    std::cout << "Entity Destoryed!" << std::endl;
  }

  void print()
  {
    std::cout << X << ", " << Y << std::endl;
  }
};

// no default constructor
class Log
{
public:
  Log() = delete;
};

int main()
{
  Entity e(7, 8);

  // Log l; // gives error

  e.print();

  std::cin.get();
}
