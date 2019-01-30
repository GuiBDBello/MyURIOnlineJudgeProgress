#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(1);
    
    double N1, N2, N3, N4, media, P1 = 2, P2 = 3, P3 = 4, P4 = 1, NE;
    cin >> N1 >> N2 >> N3 >> N4;
    
    media = ((N1 * P1) + (N2 * P2) + (N3 * P3) + (N4 * P4)) / (P1 + P2 + P3 + P4);
    cout << "Media: " << media << endl;
    
    if (media >= 7.0) {
        cout << "Aluno aprovado." << endl;
    } else if (media < 5.0) {
        cout << "Aluno reprovado." << endl;
    } else if (media >= 5.0 && media < 7.0) {
        cout << "Aluno em exame." << endl;
        
        cin >> NE;
        
        cout << "Nota do exame: " << NE << endl;
        
        media = (media + NE) / 2;
        if (media >= 5.0) {
            cout << "Aluno aprovado." << endl;
        } else if (media < 5.0) {
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << media << endl;
    }
    return 0;
}