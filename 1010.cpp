#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(2);
    
    int codigo_1, numero_1, codigo_2, numero_2;
    double valor_unitario_1, valor_unitario_2, valor_pagar;
    
    cin >> codigo_1 >> numero_1 >> valor_unitario_1;
    cin >> codigo_2 >> numero_2 >> valor_unitario_2;
    
    valor_pagar = ((numero_1 * valor_unitario_1) + (numero_2 * valor_unitario_2));
    cout << "VALOR A PAGAR: R$ " << valor_pagar << endl;
    return 0;
}