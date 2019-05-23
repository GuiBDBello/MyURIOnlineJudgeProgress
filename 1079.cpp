#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    
    cout << fixed << setprecision(1);
 
    int N;
    float casoDeTeste1, casoDeTeste2, casoDeTeste3, mediaPonderada;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> casoDeTeste1 >> casoDeTeste2 >> casoDeTeste3;
        
        cout << ((casoDeTeste1 * 2) + (casoDeTeste2 * 3) + (casoDeTeste3 * 5)) / 10 << endl;
    }

    return 0;
}