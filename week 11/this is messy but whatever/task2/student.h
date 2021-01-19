#include <string>
#include <sstream>
#include "../../Week010/task2/person.h"

using namespace std;

class Student : public Person{
  private:
    string _program, _university;
    short _years;
  public:
    Student(string name, string address, string gender, short age, string occupation)
        :Person(name, address, gender, age, occupation) {
    }
    void setProgram(string program) {
      this->_program = program;
    }
    string getProgram() {
      return _program;
    }
    void setUniversity(string university) {
      this->_university = university;
    }
    string getUniversity() {
      return _university;
    }
    void setYearsInCollege(short years) {
      this->_years = years;
    }
    short getYearsInCollege() {
      return _years;
    }
};
