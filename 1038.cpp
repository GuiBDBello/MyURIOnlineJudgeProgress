#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(2);
    int codigo, quantidade;
    cin >> codigo >> quantidade;
    
    double valor;
    if (codigo == 1) {
        valor = quantidade * 4.00;
    } else if (codigo == 2) {
        valor = quantidade * 4.50;
    } else if (codigo == 3) {
        valor = quantidade * 5.00;
    } else if (codigo == 4) {
        valor = quantidade * 2.00;
    } else {
        valor = quantidade * 1.50;
    }
    
    cout << "Total: R$ " << valor << endl;
    return 0;
}