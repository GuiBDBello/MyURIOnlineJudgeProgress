#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    cout << fixed << setprecision(1);
    
    double A, B, C, aux;
    cin >> A >> B >> C;
    while (A <= 0 || B <= 0 || C <= 0) {
        cin >> A >> B >> C;
    }
    
    if (A < B) {
        aux = A;
        A = B;
        B = aux;
    }
    if (B < C) {
        aux = B;
        B = C;
        C = aux;
        if (A < B) {
            aux = A;
            A = B;
            B = aux;
        }
    }
    
    if (A >= (B + C)) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
        if (pow(A, 2) == (pow(B, 2) + pow(C, 2))) {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        if (pow(A, 2) > (pow(B, 2) + pow(C, 2))) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        if (pow(A, 2) < (pow(B, 2) + pow(C, 2))) {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        if (A == B && B == C) {
            cout << "TRIANGULO EQUILATERO" << endl;
        } else if (A == B || B == C || A == C) {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
    
    return 0;
}