#include <iostream>
#include <string>

using namespace std;

int main() {
    string palavra;
    cin >> palavra;
    
    if (palavra == "vertebrado") {
        cin >> palavra;
        
        if (palavra == "ave") {
            cin >> palavra;
            
            if (palavra == "carnivoro") {
                cout << "aguia" << endl;
            } else if (palavra == "onivoro") {
                cout << "pomba" << endl;
            }
        } else if (palavra == "mamifero") {
            cin >> palavra;
            
            if (palavra == "onivoro") {
                cout << "homem" << endl;
            } else if (palavra == "herbivoro") {
                cout << "vaca" << endl;
            }
        }
    } else if (palavra == "invertebrado") {
        cin >> palavra;
        
        if (palavra == "inseto") {
            cin >> palavra;
            
            if (palavra == "hematofago") {
                cout << "pulga" << endl;
            } else if (palavra == "herbivoro") {
                cout << "lagarta" << endl;
            }
        } else if (palavra == "anelideo") {
            cin >> palavra;
            
            if (palavra == "hematofago") {
                cout << "sanguessuga" << endl;
            } else if (palavra == "onivoro") {
                cout << "minhoca" << endl;
            }
        }
    }
    
    return 0;
}