#include <iostream>
 
using namespace std;
 
int main() {
 
    int N, X, Y, somaImpares = 0;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> X >> Y;
        
        if (X > Y) {
            int aux = X;
            X = Y;
            Y = aux;
        }
        for (int j = X+1; j < Y; j++) {
            if (j % 2 != 0) {
                somaImpares += j;
            }
        }
        cout << somaImpares << endl;
        somaImpares = 0;
    }
 
    return 0;
}