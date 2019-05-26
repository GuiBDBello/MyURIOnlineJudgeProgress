#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
#include <iomanip>

using namespace std;

int main() {
    
    cout << fixed << setprecision(2);
 
    int N, Quantia = 0, coelhos = 0, ratos = 0, sapos = 0;
    string Tipo;
    string casoDeTeste, qtd;
    
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        getline(cin >> qtd, casoDeTeste);
        int aux = stoi(qtd);
        Quantia += aux;
        Tipo = casoDeTeste.substr(1, 2);
        
        if (Tipo == "C") {
            coelhos += aux;
        } else if (Tipo == "R") {
            ratos += aux;
        } else if (Tipo == "S") {
            sapos += aux;
        }
    }
    
    cout << "Total: " << Quantia << " cobaias" << endl;
    cout << "Total de coelhos: " << coelhos << endl;
    cout << "Total de ratos: " << ratos << endl;
    cout << "Total de sapos: " << sapos << endl;
    
    cout << "Percentual de coelhos: " << ((float)100 * coelhos) / Quantia << " %" << endl;
    cout << "Percentual de ratos: " << ((float)100 * ratos) / Quantia << " %" << endl;
    cout << "Percentual de sapos: " << ((float)100 * sapos) / Quantia << " %" << endl;
 
    return 0;
}