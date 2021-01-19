#include <string>
#include <sstream>

using namespace std;

class Polygon {

  public:
    string Name, Color;
    short Sides;
    Polygon(string name, string color, short sides);
    string getInformation();
};

Polygon::Polygon(string name, string color, short sides){
  Name = name;
  Color = color;
  Sides = sides;
}

string Polygon::getInformation(){
  ostringstream s;
  s << "Name: " << Name << endl;
  s << "Color: " << Color << endl;
  s << "Sides: " << Sides << endl;
  return s.str();
}
