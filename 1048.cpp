#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(2);
    
    double salario, novo_salario, reajuste;
    int percentual;
    cin >> salario;
    
    if (salario > 0.00 && salario <= 400.00) {
        percentual = 15;
    } else if (salario > 400.00 && salario <= 800.00) {
        percentual = 12;
    } else if (salario > 800.00 && salario <= 1200.00) {
        percentual = 10;
    } else if (salario > 1200.00 && salario <= 2000.00) {
        percentual = 7;
    } else if (salario > 2000.00) {
        percentual = 4;
    }
    
    reajuste = (salario * percentual) / 100;
    novo_salario = salario + reajuste;
    
    cout << "Novo salario: " << novo_salario << endl;
    cout << "Reajuste ganho: " << reajuste << endl;
    cout << "Em percentual: " << percentual << " %" << endl;
    
    return 0;
}