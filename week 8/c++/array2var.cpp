#include <iostream>

using namespace std;

int main(){
  int x[5], i;
  cout << "Please enter 5 numbers." << endl;

  for(i = 0; i < 5; i++)
  {
    cout << "Number[" << i + 1 << "]: ";
    cin >> x[i];
  }
  cout << "You entered these integers: " << x[0] << ", " << x[1] << ", " << x[2] << ", " << x[3] << ", " << x[4] << endl;
  return EXIT_SUCCESS;
}
