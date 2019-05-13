#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(1);
    
    float valor, mediaPositivos = 0;
    int quantidadePositivos = 0;
    
    for (int i = 0; i < 6; i++) {
        cin >> valor;
        if (valor > 0) {
            quantidadePositivos++;
            mediaPositivos += valor;
        }
    }
    
    mediaPositivos /= quantidadePositivos;
    
    cout << quantidadePositivos << " valores positivos" << endl;
    cout << mediaPositivos << endl;
    
    return 0;
}