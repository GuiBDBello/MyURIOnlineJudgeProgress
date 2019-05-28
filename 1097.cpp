#include <iostream>
 
using namespace std;
 
int main() {
    
    int i = 1, j, aux = 7;
 
    while(i <= 9) {
        for (j = aux; j > (aux - 3); j--) {
            cout << "I=" << i << " J=" << j << endl;
        }
        aux = j + 5;
        i+=2;
    }
    return 0;
}