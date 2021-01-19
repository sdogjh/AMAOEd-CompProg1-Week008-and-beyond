#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
  char x[10];
  char * y;
  y = (char*) &x;
  cout << "The value of x is: " << x << endl;
  cout << "The logical address of x is: " << &x << endl;
  cout << "The value of pointer of x is: " << y << endl;
  return 0;
}
