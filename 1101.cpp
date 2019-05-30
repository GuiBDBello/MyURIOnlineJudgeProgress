#include <iostream>
 
using namespace std;
 
int main() {
 
    int M, N, soma = 0;
    
    cin >> M >> N;
    while (M > 0 && N > 0) {
        if (M > N) {
            int aux = M;
            M = N;
            N = aux;
        }
        
        for (int i = M; i <= N; i++) {
            soma += i;
            cout << i << " ";
        }
        cout << "Sum=" << soma << endl;
        soma = 0;
        
        cin >> M >> N;
    }
 
    return 0;
}