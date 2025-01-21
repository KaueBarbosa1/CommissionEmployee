#include <iostream>
#include "Commission.h"

using namespace std;

// Construtor
CommissionEmployee::CommissionEmployee(const string &first, const string &last, const string &ssn,
                                       double sales, double rate)
    : firstName(first), lastName(last), socialSecurityNumber(ssn) {
    setGrossSales(sales);
    setCommissionRate(rate);
}

// Métodos para o primeiro nome
void CommissionEmployee::setFirstName(const string &first) {
    firstName = first;
}

string CommissionEmployee::getFirstName() const {
    return firstName;
}

// Métodos para o último nome
void CommissionEmployee::setLastName(const string &last) {
    lastName = last;
}

string CommissionEmployee::getLastName() const {
    return lastName;
}

// Métodos para o Social Security Number
void CommissionEmployee::setSocialSecurityNumber(const string &ssn) {
    socialSecurityNumber = ssn;
}

string CommissionEmployee::getSocialSecurityNumber() const {
    return socialSecurityNumber;
}

// Métodos para vendas brutas
void CommissionEmployee::setGrossSales(double sales) {
    grossSales = (sales < 0.0) ? 0.0 : sales;
}

double CommissionEmployee::getGrossSales() const {
    return grossSales;
}

// Métodos para a taxa de comissão
void CommissionEmployee::setCommissionRate(double rate) {
    commissionRate = (rate > 0.0 && rate < 1.0) ? rate : 0.0;
}

double CommissionEmployee::getCommissionRate() const {
    return commissionRate;
}

// Calcula os ganhos
double CommissionEmployee::earnings() const {
    return commissionRate * grossSales;
}

// Imprime os dados do funcionário
void CommissionEmployee::print() const {
    cout << "Commission Employee: " << firstName << " " << lastName
         << "\nSocial Security Number: " << socialSecurityNumber
         << "\nGross Sales: " << grossSales
         << "\nCommission Rate: " << commissionRate << endl;
}