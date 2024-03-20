#include <iostream>
using namespace std;

int main() 
{
  int avg[10];
  int add = 0;

  cout << "Enter a 10 elements: ";
  for (int i = 0; i < 10; i++) 
  {
    cin >> avg[i];
    add += avg[i];
  }

  double average = add / 10;

  cout << "add of numbars: " << add << endl;
  cout << "Average of numbars: " << avg << endl;

  cout << " array is Sorted: ";

  for (int i = 0; i < 10; i++) 
{
    cout << avg[i] << "  ";
  }

  return 0;
}
    