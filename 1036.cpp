#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    cout << fixed << setprecision(5);
    
    double A, B, C, X, delta;
    cin >> A >> B >> C;
    
    delta = pow(B, 2) - (4 * A * C);
    
    if (delta < 0 || A == 0) {
        cout << "Impossivel calcular" << endl;
    } else {
        X = (-B + sqrt(delta)) / (2 * A);
        cout << "R1 = " << X << endl;
        
        X = (-B - sqrt(delta)) / (2 * A);
        cout << "R2 = " << X << endl;
    }
    
    return 0;
}