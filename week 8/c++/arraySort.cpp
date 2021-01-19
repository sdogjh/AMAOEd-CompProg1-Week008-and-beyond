#include <iostream>

using namespace std;

int main()
{
  int x[6], i, j, temp;
  cout << "Please enter 6 numbers to sort." << endl;

  for(i = 0; i < 6; i++)
  {
    cout << "Number[" << i + 1 << "]: ";
    cin >> x[i];
  }
  for(i = 0; i < 6; i++)
  {
    j = i + 1;
    while(j<6){
      while(x[i] > x[j]) {
        temp=x[i];
        x[i]=x[j];
        x[j]=temp;
        j++;
      }
      j++;
    }
  }
  cout << "Integers after sorted: " << x[0] << ", " << x[1] << ", " << x[2] << ", " << x[3] << ", " << x[4] << ", " << x[5] << endl;
  return EXIT_SUCCESS;
}
