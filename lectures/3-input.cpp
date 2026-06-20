#include <iostream>
using namespace std;

int main()
{
  int i;
  cout << "Enter a value: ";
  cin >> i;
  cout << "Here's your number : " << i << "\n";

  float f;
  char s[80];
  cout << "Enter an integer, float, and string: ";
  cin >> i >> f >> s;
  cout << "Here's your data: ";
  cout << i << ' ' << f << ' ' << s << endl;

  char ch;
  cout << "Enter keys, x to stop.\n";
  do
  {
    cout << ": ";
    cin >> ch;
  } while (ch != 'x');

  return 0;
}
