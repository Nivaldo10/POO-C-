// Figura 12.11: BasePlusCommissionEmployee.cpp
// Defini��es de fun��o-membro da classe BasePlusCommissionEmployee.
#include <iostream>
using std::cout;

// defini��o da classe BasePlusCommissionEmployee
#include "BBasePlusCommissionEmployee.h"

// construtor
BasePlusCommissionEmployee::BasePlusCommissionEmployee(
   const string &first, const string &last, const string &ssn,
   double sales, double rate, double salary )
// chama explicitamente o construtor da classe b�sica 
   : CommissionEmployee( first, last, ssn, sales, rate ) 
{
   setBaseSalary( salary ); // valida e armazena sal�rio-base
} // fim do construtor BasePlusCommissionEmployee

// configura o sal�rio-base
void BasePlusCommissionEmployee::setBaseSalary( double salary )
{
   baseSalary = ( salary < 0.0 ) ? 0.0 : salary;
} // fim da fun��o setBaseSalary

// retorna o sal�rio-base
double BasePlusCommissionEmployee::getBaseSalary() const
{
   return baseSalary;
} // fim da fun��o getBaseSalary

// calcula os rendimentos
double BasePlusCommissionEmployee::earnings() const
{
// a classe derivada n�o pode acessar dados private da classe b�sica 
   return baseSalary + ( commissionRate * grossSales ); 
} // fim da fun��o earnings

// imprime o objeto BasePlusCommissionEmployee
void BasePlusCommissionEmployee::print() const
{
// a classe derivada n�o pode acessar dados private da classe b�sica 
	cout << "base-salaried commission employee: " << firstName << ' ' 
    	<< lastName << "\nsocial security number: " << socialSecurityNumber 
    	<< "\ngross sales: " << grossSales 
    	<< "\ncommission rate: " << commissionRate 
    	<< "\nbase salary: " << baseSalary; 
} // fim da fun��o print
