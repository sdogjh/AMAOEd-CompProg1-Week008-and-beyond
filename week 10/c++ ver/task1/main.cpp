#include <cstdlib>
#include <iostream>
#include "mammal.h"

using namespace std;

int main()
{
  Mammal animal("cat", "fluffy", 4, true);

  cout << "[Mammal Details] \n" << animal.getMammal() << endl;

  cout << endl;
  return EXIT_SUCCESS;
}
