#include <iostream>

using namespace std;

void setValue(int& b) {
  b = 27946;
}

int main() {
  int a = 654321;

  cout << "The value of a is: " << a << endl;

  setValue(a);
  cout << "The value of a after setValue is: " << a << endl;

  return EXIT_SUCCESS;
}
