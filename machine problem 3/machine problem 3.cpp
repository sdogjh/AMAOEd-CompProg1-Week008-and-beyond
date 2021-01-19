#include <string>
#include <iostream>
#include <iomanip>
#include "payslip.h"

using namespace std;
struct separated : numpunct<char>
{
    string do_grouping() const { return "\03"; }
};

int main(){
     locale our_local(cout.getloc(), new separated);
    cout.imbue(our_local);
    char name[32];
    float basicSalary;
    int overtimeHour;

    cout << "Input Employee Name: ";
    cin.get(name,32);
    cout << "Input Basic Salary: ";
    cin >> basicSalary;
    if (basicSalary < 10000){
        cout <<"Basic salary should not be less than 10,000." << endl;
        return EXIT_FAILURE;
    }
    cout << "Input number of Overtime Hours: ";
    cin >> overtimeHour;
    if(overtimeHour < 1){
        cout << "Minimum overtime hours is 1 hour." << endl;
        return EXIT_FAILURE;
    }
    Payslip Employee(name, basicSalary, overtimeHour);
    cout << Employee.computePay() << endl;
    return 0;
}
