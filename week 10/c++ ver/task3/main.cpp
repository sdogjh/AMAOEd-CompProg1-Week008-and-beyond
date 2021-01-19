#include <cstdlib>
#include <iostream>
#include "polygon.h"

using namespace std;

int main()
{
  Polygon shape("Triangle", "Pink", 3);

  cout << "[Polygon Details] \n" << shape.getInformation() << endl;

  cout << endl;
  return EXIT_SUCCESS;
}
