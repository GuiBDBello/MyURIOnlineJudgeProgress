#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int A, B, C, maior;
    cin >> A >> B >> C;
    
    maior = (A + B + abs(A - B)) / 2;
    maior = (C + maior + abs(C - maior)) / 2;

    cout << maior << " eh o maior" << endl;
    return 0;
}