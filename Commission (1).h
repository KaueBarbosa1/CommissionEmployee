#ifndef COMMISSION_H
#define COMMISSION_H

#include <string>
using std::string;

class CommissionEmployee
{
public:
    // Construtor
    CommissionEmployee(const string &, const string &, const string &,
                       double = 0.0, double = 0.0);

    // Métodos para o nome
    void setFirstName(const string &);
    string getFirstName() const;

    void setLastName(const string &);
    string getLastName() const;

    // Métodos para Social Security Number
    void setSocialSecurityNumber(const string &);
    string getSocialSecurityNumber() const;

    // Métodos para vendas brutas e comissão
    void setGrossSales(double);
    double getGrossSales() const;

    void setCommissionRate(double);
    double getCommissionRate() const;

    // Calcula os ganhos e imprime os dados
    double earnings() const;
    void print() const;

private:
    string firstName;               // Corrigido de "fisrtName"
    string lastName;
    string socialSecurityNumber;    // Nome do campo ajustado
    double grossSales;
    double commissionRate;
};

#endif