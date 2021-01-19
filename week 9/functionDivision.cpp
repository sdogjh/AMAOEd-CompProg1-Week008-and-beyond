#include <iostream>

using namespace std;

int divide(int dividend, int divisor) {
  return dividend / divisor;
}

int main() {
  int x[3][3], i;

  for(i = 0; i < 3; i++)
  {
    cout << "Set " << i + 1 << endl;
    while (x[i][0] == 0) {
      cout << "Enter the dividend for set " << i + 1 << ": ";
      cin >> x[i][0];
    }

    while (x[i][1] == 0) {
      cout << "Enter the divisor for set " << i + 1 << ": ";
      cin >> x[i][1];
    }
  }


  for(i = 0; i < 3; i++)
  {
    cout << "Answer for set " << i + 1 << " (" << x[i][0] << "/" << x[i][1] << ") is: " << divide(x[i][0], x[i][1]) << endl;
  }
  return EXIT_SUCCESS;
}
