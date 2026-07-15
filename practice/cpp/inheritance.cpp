#include <iostream>

class Entity
{
public:
  int X, Y;

  Entity() : X(0), Y(0) {}

  void Move(int x, int y)
  {
    X += x;
    Y += y;
  }
};

class Player : public Entity
{
public:
  std::string Name;

  Player(const std::string &n) : Name(n) {}
};

int main()
{
  Player p("Alice");
  p.Move(1, 2);
  std::cout << "Player " << p.Name << " at (" << p.X << ", " << p.Y << ")\n";
  std::cin.get();
}
