#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
 
    string senha, senhaValida = "2002";
    
    cin >> senha;
    while (senha != senhaValida) {
        cout << "Senha Invalida" << endl;
        cin >> senha;
    }
    cout << "Acesso Permitido" << endl;
 
    return 0;
}