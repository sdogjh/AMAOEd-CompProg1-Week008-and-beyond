#include <cstdlib>
#include <iostream>
#include "dog.h"

using namespace std;

int main()
{
  Dog pet("Dog", "Wavy", 4, true);
  pet.setBreed("Chihuahua");
  pet.setSize("Small");
  pet.setIsRegister(false);
  cout << "[Dog Details] \n" << pet.getMammal();
  cout << "Breed: " << pet.getBreed() << endl;
  cout << "Size: " << pet.getSize() << endl;
  cout << "Is Registered: " << pet.getIsRegister() << endl;
  cout << endl;
  return EXIT_SUCCESS;
}
