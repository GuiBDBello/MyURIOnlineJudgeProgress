#include <iostream>
 
using namespace std;
 
int main() {
    int ultimoValorLido, maiorValorLido, posicaoMaiorValor;
    
    for (int i = 1; i <= 100; i++) {
        cin >> ultimoValorLido;
        
        if (ultimoValorLido > maiorValorLido) {
            maiorValorLido = ultimoValorLido;
            posicaoMaiorValor = i;
        }
    }
    
    cout << maiorValorLido << endl;
    cout << posicaoMaiorValor << endl;
 
    return 0;
}