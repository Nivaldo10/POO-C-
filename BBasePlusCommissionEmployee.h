// Figura 12.10: BasePlusCommissionEmployee.h
// Classe BasePlusCommissionEmployee derivada da classe
// CommissionEmployee.
#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string> // classe string padr�o C++
using std::string;

#include "CommissionEmployee.h" // declara��o da classe CommissionEmployee
 
class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
    BasePlusCommissionEmployee( const string &, const string &,
    	const string &, double = 0.0, double = 0.0, double = 0.0 );

	void setBaseSalary( double ); // configura o sal�rio-base
	double getBaseSalary() const; // retorna o sal�rio-base

	double earnings() const; // calcula os rendimentos
	void print() const; // imprime o objeto BasePlusCommissionEmployee
private:
	double baseSalary; // sal�rio-base
}; // fim da classe BasePlusCommissionEmployee

#endif
