#include <iostream>

using namespace std;

int main() {
    int anos, meses, dias, idade_dias;
    cin >> idade_dias;
    
    anos = idade_dias / 365;
    idade_dias %= 365;
    
    meses = idade_dias / 30;
    idade_dias %= 30;
    
    dias = idade_dias;
    
    cout << anos << " ano(s)" << endl;
    cout << meses << " mes(es)" << endl;
    cout << dias << " dia(s)" << endl;
    return 0;
}