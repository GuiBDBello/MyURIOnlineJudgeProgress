#include <iostream>

using namespace std;

int main() {
    int hora_inicial, minuto_inicial, hora_final, minuto_final, duracao_hora, duracao_minuto;
    cin >> hora_inicial >> minuto_inicial >> hora_final >> minuto_final;
    
    if (hora_inicial == hora_final && minuto_inicial == minuto_final) {
        duracao_hora = 24;
        duracao_minuto = 0;
    } else {
        if (hora_inicial < hora_final) {
            duracao_hora = hora_final - hora_inicial;
        } else {
            duracao_hora = 24 - hora_inicial + hora_final;
        }
        
        if (minuto_inicial == minuto_final) {
            duracao_minuto = 0;
        } else if (minuto_inicial < minuto_final) {
            duracao_minuto = minuto_final - minuto_inicial;
            
            if (duracao_hora == 24) {
                if (minuto_inicial < minuto_final) {
                    duracao_hora = 0;
                } else {
                    duracao_hora -= 24;
                }
            }
        } else {
            duracao_minuto = 60 - minuto_inicial + minuto_final;
            duracao_hora --;
        }
    }
    cout << "O JOGO DUROU " << duracao_hora << " HORA(S) E " << duracao_minuto << " MINUTO(S)" << endl;
    return 0;
}