#include <string>
#include <sstream>

using namespace std;

class Mammal {
  private:
    string sName, sFur;
    short nLegs;
    bool bTail;

  public:
    Mammal(string name, string fur, short legs, bool hasTail) {
      sName = name;
      sFur = fur;
      nLegs = legs;
      bTail = hasTail;
    }

    string getMammal() {
      ostringstream s;
      s << "Name: " << sName << endl;
      s << "Fur: " << sFur << endl;
      s << "Legs: " << nLegs << endl;
      s << "Has Tail: " << bTail << endl;
      return s.str();
    }
};
