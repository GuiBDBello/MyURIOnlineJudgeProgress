#include <iostream>

using namespace std;

int main() {
    int horas, minutos, segundos, N;
    cin >> N;
    
    horas = N / 3600;
    N = N % 3600;
    
    minutos = N / 60;
    N = N % 60;
    
    segundos = N;
    
    cout << horas << ":" << minutos << ":" << segundos << endl;
    return 0;
}