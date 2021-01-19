#include <iostream>

using namespace std;

int main () {
  string a[10] = {"A","B","C","D","E","F","G","H","I","J" };
  int i, j, k, n;
  cout <<"Input Height: ";
  cin >> n;
  if (n<=10 && n>=1){
    for (i=1; i<=n; i++)
    {
      for (j=1; j<=n-i; j++)
    {
    cout << " ";
  }
for (j = 1; j<=(2*i)-1; j++)
{
  cout << a[i-1];
}
cout << endl;
    }
  }
else{
  cout << "Invalid height. Minimum is 1 and maximum is 10" << endl;
}
return 0;
}


