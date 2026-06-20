#include <iostream>
using namespace std;

int main()
{
  float feet;

  do
  {
    cout << "Enter feet: ";
    cin >> feet;
    cout << "Inch: " << feet * 12 << endl;
  } while (feet != 0);

  return 0;
}
