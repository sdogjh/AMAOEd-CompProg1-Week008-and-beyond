#include <iostream>
#include <stdio.h>

using namespace std;

void setRef(string& b) {
  b = "This is it!";
}

int main() {
  string a;

  setRef(a);
  printf("%s\n",a.c_str());

  return EXIT_SUCCESS;
}
