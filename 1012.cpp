#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    cout << fixed << setprecision(1);
    
    double A, B, C, triangulo, circulo, trapezio, quadrado, retangulo, pi = 3.14159;
    cin >> A >> B >> C;
    
    triangulo = (A * C) / 2.0;
    circulo = pi * pow(C, 2.0);
    trapezio = ((A + B) * C) / 2.0;
    quadrado = B * B;
    retangulo = A * B;
    
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << triangulo << endl;
    cout << "CIRCULO: " << circulo << endl;
    cout << "TRAPEZIO: " << trapezio << endl;
    cout << "QUADRADO: " << quadrado << endl;
    cout << "RETANGULO: " << retangulo << endl;
    return 0;
}