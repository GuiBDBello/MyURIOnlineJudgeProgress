#include <iostream>
 
using namespace std;
 
int main() {
    
    int N, valor;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> valor;
        
        if (valor % 2 == 0) {
            if (valor > 0) {
                cout << "EVEN POSITIVE" << endl;
            } else if (valor < 0) {
                cout << "EVEN NEGATIVE" << endl;
            } else {
                cout << "NULL" << endl;
            }
        } else {
            if (valor > 0) {
                cout << "ODD POSITIVE" << endl;
            } else {
                cout << "ODD NEGATIVE" << endl;
            }
        }
    }
 
    return 0;
}