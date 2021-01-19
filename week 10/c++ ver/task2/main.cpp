#include <cstdlib>
#include <iostream>
#include "person.h"

using namespace std;

int main()
{
  Person pip("Aries Camitan", "Guiguinto, Bulacan", "Male", 37, "Software Developer");

  cout << "[Personal Details] \n" << pip.getInformation() << endl;

  cout << endl;
  return EXIT_SUCCESS;
}
