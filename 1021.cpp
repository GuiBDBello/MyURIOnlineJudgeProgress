#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    
    int notas_100, notas_50, notas_20, notas_10, notas_5, notas_2;
    int moedas_100, moedas_50, moedas_25, moedas_10, moedas_5;
    
    double moedas_1;
    
    double N;
    cin >> N;
    
    while (N < 0 || N > 1000000.00) {
        cin >> N;
    }
    
    notas_100 = N / 100.00;
    N -= (notas_100 * 100.00);
    
    notas_50 = N / 50.00;
    N -= (notas_50 * 50.00);
    
    notas_20 = N / 20.00;
    N -= (notas_20 * 20.00);
    
    notas_10 = N / 10.00;
    N -= (notas_10 * 10.00);
    
    notas_5 = N / 5.00;
    N -= (notas_5 * 5.00);
    
    notas_2 = N / 2.00;
    N -= (notas_2 * 2.00);
    
    moedas_100 = N / 1.00;
    N -= (moedas_100 * 1.00);
    
    moedas_50 = N / 0.50;
    N -= (moedas_50 * 0.50);
    
    moedas_25 = N / 0.25;
    N -= (moedas_25 * 0.25);
    
    moedas_10 = N / 0.10;
    N -= (moedas_10 * 0.10);
    
    moedas_5 = N / 0.05;
    N = N - (moedas_5 * 0.05);
    
    moedas_1 = (N / 0.01);
    
    cout << "NOTAS:" << endl;
    cout << notas_100 << " nota(s) de R$ 100.00" << endl;
    cout << notas_50 << " nota(s) de R$ 50.00" << endl;
    cout << notas_20 << " nota(s) de R$ 20.00" << endl;
    cout << notas_10 << " nota(s) de R$ 10.00" << endl;
    cout << notas_5 << " nota(s) de R$ 5.00" << endl;
    cout << notas_2 << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << moedas_100 << " moeda(s) de R$ 1.00" << endl;
    cout << moedas_50 << " moeda(s) de R$ 0.50" << endl;
    cout << moedas_25 << " moeda(s) de R$ 0.25" << endl;
    cout << moedas_10 << " moeda(s) de R$ 0.10" << endl;
    cout << moedas_5 << " moeda(s) de R$ 0.05" << endl;
    cout << moedas_1 << " moeda(s) de R$ 0.01" << endl;
    
    // A resolução abaixo não funciona, apesar da saída acontecer EXATAMENTE como requisitada.
    /*
    notas = (int)(N / 100.00);
    N = fmod(N, 100.00);
    cout << notas << " nota(s) de R$ 100.00\n";
    
    notas = (int)(N / 50.00);
    N = fmod(N, 50.00);
    cout << notas << " nota(s) de R$ 50.00\n";
    
    notas = (int)(N / 20.00);
    N = fmod(N, 20.00);
    cout << notas << " nota(s) de R$ 20.00\n";
    
    notas = (int)(N / 10.00);
    N = fmod(N, 10.00);
    cout << notas << " nota(s) de R$ 10.00\n";
    
    notas = (int)(N / 5.00);
    N = fmod(N, 5.00);
    cout << notas << " nota(s) de R$ 5.00\n";
    
    notas = (int)(N / 2.00);
    N = fmod(N, 2.00);
    cout << notas << " nota(s) de R$ 2.00\n";
    
    cout << "MOEDAS:\n";
    
    moedas = (int)(N / 1.00);
    N = fmod(N, 1.00);
    cout << moedas << " moeda(s) de R$ 1.00\n";
    
    moedas = (int)(N / 0.50);
    N = fmod(N, 0.50);
    cout << moedas << " moeda(s) de R$ 0.50\n";
    
    moedas = (int)(N / 0.25);
    N = fmod(N, 0.25);
    cout << moedas << " moeda(s) de R$ 0.25\n";
    
    moedas = (int)(N / 0.10);
    N = fmod(N, 0.10);
    cout << moedas << " moeda(s) de R$ 0.10\n";
    
    moedas = (int)(N / 0.05);
    N = fmod(N, 0.05);
    cout << moedas << " moeda(s) de R$ 0.05\n";
    
    moedas = (int)(N / 0.01);
    cout << moedas << " moeda(s) de R$ 0.01" << endl;
     */
    return 0;
}