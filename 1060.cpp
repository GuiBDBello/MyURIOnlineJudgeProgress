#include <iostream>

using namespace std;

int main() {
    double valor;
    int contador = 0;
    for (int i = 0; i < 6; i++) {
        cin >> valor;
        
        if (valor > 0) {
            contador++;
        }
    }
    cout << contador << " valores positivos" << endl;
    return 0;
}