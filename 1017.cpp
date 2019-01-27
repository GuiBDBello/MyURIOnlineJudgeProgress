#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double km_l = 12, litros;
    int tempo, velocidade_media, distancia;
    cin >> tempo >> velocidade_media;
    
    distancia = tempo * velocidade_media;
    litros = distancia / km_l;
    
    cout << fixed << setprecision(3) << litros << endl;
    return 0;
}