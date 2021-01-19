#include <iostream>
#include <string>

using namespace std;

string separateDigit(int digit) {
  return to_string(digit / 10 % 10) + " " + to_string(digit % 10);
}

int main() {
  int digit;

  while(true){
    if(cin.fail()) {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } else if (digit < 10 || digit > 99) {
      cout << "Please enter a short value from 10 to 99: ";
      cin >> digit;
    } else {
      break;
    }
  }

  cout << separateDigit(digit) << endl;
  return EXIT_SUCCESS;
}
