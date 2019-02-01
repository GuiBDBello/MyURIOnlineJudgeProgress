#include <iostream>

using namespace std;

int main() {
    int hora_inicial, hora_final, duracao;
    cin >> hora_inicial >> hora_final;
    
    if (hora_inicial == hora_final) {
        duracao = 24;
    } else if (hora_inicial < hora_final) {
        duracao = hora_final - hora_inicial;
    } else {
        duracao = 24 - hora_inicial + hora_final;
    }
    cout << "O JOGO DUROU " << duracao << " HORA(S)" << endl;
    return 0;
}