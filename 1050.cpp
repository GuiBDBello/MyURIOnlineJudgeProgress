#include <iostream>
#include <string>

using namespace std;

int main() {
    int ddd;
    string destination;
    cin >> ddd;
    
    if (ddd == 11) {
        destination = "Sao Paulo";
    } else if (ddd == 19) {
        destination = "Campinas";
    } else if (ddd == 21) {
        destination = "Rio de Janeiro";
    } else if (ddd == 27) {
        destination = "Vitoria";
    } else if (ddd == 31) {
        destination = "Belo Horizonte";
    } else if (ddd == 32) {
        destination = "Juiz de Fora";
    } else if (ddd == 61) {
        destination = "Brasilia";
    } else if (ddd == 71) {
        destination = "Salvador";
    } else {
        destination = "DDD nao cadastrado";
    }
    
    cout << destination << endl;
    return 0;
}