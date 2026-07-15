# C++ Short Notes

## Variables

- Declaration and initialization:

```cpp
int x = 5;
double pi = 3.14;
std::string name = "Alice";
```

## Functions

- Define and call:

```cpp
int add(int a, int b) { return a + b; }
// usage: int c = add(2, 3);
```

## Header Files

- Use headers for declarations and include with `#include`:

```cpp
// iostream provides cout/cin
#include <iostream>
#include <string>
```

## Conditionals & Branches

```cpp
if (x > 0) {
  std::cout << "positive\n";
} else {
  std::cout << "non-positive\n";
}
```

## Loops

```cpp
for (int i = 0; i < 5; ++i) std::cout << i << '\n';
while (x > 0) { x--; }
```

## Control Flow

- `break`, `continue`, `return` control execution inside loops/functions.

## Pointers

- Hold memory addresses:

```cpp
int a = 10;
int *p = &a; // p points to a
*p = 20;     // modify a through p
```

## References

- Aliases for variables (safer than raw pointers when not null):

```cpp
int b = 3;
int &r = b; // r is an alias for b
r = 5;      // b becomes 5
```

## Classes

- Encapsulate data and behavior:

```cpp
class Point {
public:
  int x, y;
  Point(int x_, int y_) : x(x_), y(y_) {}
  void move(int dx, int dy) { x += dx; y += dy; }
};
```

## Class vs Struct

- `class` members are private by default; `struct` members are public by default.

```cpp
struct S { int v; }; // v is public
class C { int v; };  // v is private
```

## Enums

- Named integer constants:

```cpp
enum Color { Red, Green, Blue };
Color c = Green;
```

## Constructors

- Special methods run at object creation. Use initializer lists:

```cpp
class Log {
public:
  Log() = default;              // default constructor
  Log(const std::string &s) {}  // custom constructor
};
```

## Destructors

- Run when object is destroyed. Use for cleanup:

```cpp
class Temp {
public:
  ~Temp() { /* cleanup */ }
};
```

## Inheritance

- Derive classes to reuse behavior:

```cpp
class Entity { public: int x=0, y=0; };
class Player : public Entity { public: std::string name; };
```
