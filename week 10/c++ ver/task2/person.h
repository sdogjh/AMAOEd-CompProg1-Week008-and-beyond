#include <string>
#include <sstream>

using namespace std;

class Person {

  public:
    string Name, Address, Gender, Occupation;
    short Age;
    Person(string name, string address, string gender, short age, string occupation);
    string getInformation();
};

Person::Person(string name, string address, string gender, short age, string occupation){
  Name = name;
  Address = address;
  Gender = gender;
  Age = age;
  Occupation = occupation;
}

string Person::getInformation(){
  ostringstream s;
  s << "Name: " << Name << endl;
  s << "Address: " << Address << endl;
  s << "Gender: " << Gender << endl;
  s << "Age: " << Age << endl;
  s << "Occupation: " << Occupation << endl;
  return s.str();
}
