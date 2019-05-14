#include <iostream>

using namespace std;

int main() {
    int X, Y, somaImpares = 0;
    
    cin >> X >> Y;
    
    if (X > Y) {
        int aux = X;
        X = Y;
        Y = aux;
    }
    
    for (int i = X+1; i < Y; i++) {
        if (i % 2 != 0) {
            somaImpares += i;
        }
    }
    
    cout << somaImpares << endl;
    
    return 0;
}