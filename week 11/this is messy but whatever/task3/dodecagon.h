#include <string>
#include <sstream>
#include "../../Week010/task3/polygon.h"

using namespace std;

class Dodecagon: public Polygon {

  public:
    Dodecagon(string name, string color, short sides)
      : Polygon(name, color, sides){

    }
};
