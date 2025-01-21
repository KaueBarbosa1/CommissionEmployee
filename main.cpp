#include <iostream>
#include "Commission.h"

using namespace std;

int main() {
    // Criando um objeto da classe CommissionEmployee
    CommissionEmployee emp("Heitor", "Freitas", "659-32-193", 50000.0, 0.1);

    // Exibindo os dados do funcionário
    emp.print();
    cout << "Earnings: $" << emp.earnings() << endl;

    return 0;
}