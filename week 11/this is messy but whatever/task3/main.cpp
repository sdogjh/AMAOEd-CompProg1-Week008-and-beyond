#include <cstdlib>
#include <iostream>
#include "dodecagon.h"

using namespace std;

int main()
{
  Dodecagon dodecagon("Dodecagon", "Purple", 12);
  cout << "[Shape Details] \n" << dodecagon.getInformation() << endl;

  cout << endl;
  return EXIT_SUCCESS;
}
