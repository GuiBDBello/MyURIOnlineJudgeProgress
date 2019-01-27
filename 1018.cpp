#include <iostream>

using namespace std;

int main() {
    int valor, notas;
    cin >> valor;
    
    while (valor < 0 || valor > 1000000) {
        cin >> valor;
    }
    cout << valor << endl;
    
    notas = valor / 100;
    valor = valor % 100;
    cout << notas << " nota(s) de R$ 100,00" << endl;
    
    notas = valor / 50;
    valor = valor % 50;
    cout << notas << " nota(s) de R$ 50,00" << endl;
    
    notas = valor / 20;
    valor = valor % 20;
    cout << notas << " nota(s) de R$ 20,00" << endl;
    
    notas = valor / 10;
    valor = valor % 10;
    cout << notas << " nota(s) de R$ 10,00" << endl;
    
    notas = valor / 5;
    valor = valor % 5;
    cout << notas << " nota(s) de R$ 5,00" << endl;
    
    notas = valor / 2;
    valor = valor % 2;
    cout << notas << " nota(s) de R$ 2,00" << endl;
    
    notas = valor / 1;
    cout << notas << " nota(s) de R$ 1,00" << endl;
    return 0;
}