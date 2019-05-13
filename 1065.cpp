#include <iostream>

using namespace std;

int main() {
    int valor, quantidadePares = 0;
    
    for (int i = 0; i < 5; i++) {
        cin >> valor;
        if (valor % 2 == 0) {
            quantidadePares++;
        }
    }
    
    cout << quantidadePares << " valores pares" << endl;
    
    return 0;
}