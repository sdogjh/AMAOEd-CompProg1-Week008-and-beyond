#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Payslip
{
private:
string name;
char payGrade;
float basicSalary, grossPay, netPay, withHoldingTax, taxRate;
int overtimeHour;

public:
Payslip(string name, float basicSalary, int overtimeHour);

// this code right here is the mutator
void setEmployeeName(string employeeName);
void setPayGrade( char payGrade);
void setBasicSalary( float basicSalary);
void setOvertimeHour( int overtimeHour);
void setNetPay( float netPay);
void setWithHoldingTax( float withHoldingTax);
void setTaxRate( float taxRate);

// this code here will be the accessors
string getEmployeeName();
char getPayGrade();
float getBasicSalary();
int getOvertimeHour();
float getNetPay();
float getWithHoldingTax();
float getTaxRate();

// this right here will be the methods
void determinePayGradeAndTaxRate();
string computePay();
};
///////////////////////////////////////////////////////////////////////////////////////////////////
Payslip:: Payslip (string name, float basicSalary, int overtimeHour)
{
    this->setEmployeeName(name);
    this->setBasicSalary(basicSalary);
    this->setOvertimeHour(overtimeHour);
    this->determinePayGradeAndTaxRate();
}
void Payslip::setEmployeeName(string name)
{
    this-> name = name;
}
void Payslip::setPayGrade(char payGrade)
{
    this-> payGrade = payGrade;
}
void Payslip::setBasicSalary(float basicSalary)
{
    this-> basicSalary = basicSalary;
}
void Payslip::setOvertimeHour(int overtimeHour)
{
    this-> overtimeHour = overtimeHour;
}
void Payslip::setNetPay(float netPay)
{
    this-> netPay = netPay;
}
void Payslip::setWithHoldingTax(float withHoldingTax)
{
    this-> withHoldingTax = withHoldingTax;
}
void Payslip::setTaxRate(float taxRate)
{
    this-> taxRate = taxRate * 0.01;
}
//////////////////////////////////////////////////////////////////////////////////////////
string Payslip::getEmployeeName()
{
    return this->name;
}
char Payslip::getPayGrade()
{
    return this->payGrade;
}
float Payslip::getBasicSalary()
{
    return this->basicSalary;
}
int Payslip::getOvertimeHour()
{
    return this->overtimeHour;
}
float Payslip::getNetPay()
{
    return this->netPay;
}
float Payslip::getWithHoldingTax()
{
    return this->withHoldingTax;
}
float Payslip::getTaxRate()
{
    return this->taxRate;
}

void Payslip::determinePayGradeAndTaxRate()
{
    int payAmount[10] = {10000,15000,20000,25000,30000,35000,40000,45000,50000,55000};
    char grade[10] = {'A','B','A','B','A','B','A','B','A','B'};
    int tax_rate[10] = {10,10,15,15,20,20,25,25,30,30};
    for (int i = 0; i < 10; i++)
    {
        if (this->getBasicSalary() > 55000)
        {
            this->setTaxRate(30);
            this->setPayGrade('B');
            break;
        }
        if (this->getBasicSalary() < payAmount[i])
        {
            int index = i - 1;
            this->setTaxRate(tax_rate[i-1]);
            this->setPayGrade(grade[i-1]);
            break;
        }
    }
}
string Payslip::computePay()
{
    float otPay = this->getOvertimeHour() * (0.01* this->getBasicSalary());
    float grossPay = this->getBasicSalary() + otPay;
    float SSS = 500.00;
    float pagIbig = 200.00;
    float philHealth = 100.00;
    float fixedValue = SSS + pagIbig + philHealth;
    float withHoldingTax = grossPay * this->getTaxRate();
    this->setWithHoldingTax(withHoldingTax);

    float netPay = grossPay - this->getWithHoldingTax() - fixedValue;


cout << "Employee Name:  " << fixed << setprecision(2) << this->getEmployeeName() << endl;
cout << "Basic Salary:  " << fixed << setprecision(2) << this->getBasicSalary() << endl;
cout << "Pay Grade:  " << fixed << setprecision(2) << this->getPayGrade() << endl;
cout << "No. of OT Hours:  " << fixed << setprecision(2) << this->getOvertimeHour() << endl;
cout << "OT Pay:  " << fixed << setprecision(2) << otPay<< endl;
cout << "Gross Pay:  " << fixed << setprecision(2) << grossPay << endl;
cout << "With Holding Tax:  " << fixed << setprecision(2) << this->getWithHoldingTax() << endl;
cout << "Net Pay:  " << fixed << setprecision(2) << netPay << endl;
}
