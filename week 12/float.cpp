#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  float x[20];
  float (&y)[20] = x;
  cout << "The value of x is: " << x << endl;
  cout << "The logical address of x is: " << &x << endl;
  cout << "The value of reference  is: " << y << endl;
  return 0;
}
