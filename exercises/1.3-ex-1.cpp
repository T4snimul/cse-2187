#include <iostream>
using namespace std;

int main()
{
  int hours, wage;
  cout << "Enter your work hour and wage: ";
  cin >> hours >> wage;

  float gross = wage * hours;
  cout << "Gross Pay: $" << gross << endl;

  return 0;
}
