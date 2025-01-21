#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include "CommissionEmployee.h"

int main()
{
	CommissionEmployee employee(
		"Sue", "Jones", "222-22-2222", 1000, .06 );
	
	cout << fixed << setprecision( 2 );
	
	cout << "Employee imformacion obtained by get fuctions: \n"
		<< "\nFist name is " << employee.getFirstName()
		<< "\nLast name is " <<	employee.getLastName()
		<< "\nSocial security number is" << employee.getSocialSecurityNumber()
		<< "\nGross sales is " << employee.getGrossSales()
		<< "\nCommission rate is " << employee.getCommissionRate() << endl;
	
	employee.setGrossSales( 800 );
	employee.setCommissionRate( .1 );
	
	cout << "\nUpdated employee information output by print fuction: \n"
		<< endl;
	employee.print();
	
	cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;
	
	return 0;	
}
