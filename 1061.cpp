#include <iostream>
#include <string>

using namespace std;

string separarStringNoDelimitador(string str, string delimitador) {
    return str.substr(0, str.find(delimitador));
}

string limparAteDelimitador(string str, string delimitador) {
    return str.erase(0, str.find(delimitador) + delimitador.length());
}

int converterStringParaInteiro(string str) {
    return stoi(str);
}

int main() {
    int diaInicio, hhInicio, mmInicio, ssInicio, diaFim, hhFim, mmFim, ssFim;
    string dia, horarioInicio, horarioFim, delimiter = " : ";
    int diaDuracao, hhDuracao, mmDuracao, ssDuracao;
    int W, X, Y, Z;
    
    cin >> dia >> diaInicio;
    //getline(cin, horarioInicio);
    getline(cin >> ws, horarioInicio);
    
    hhInicio = converterStringParaInteiro(separarStringNoDelimitador(horarioInicio, delimiter));
    horarioInicio = limparAteDelimitador(horarioInicio, delimiter);
    mmInicio = converterStringParaInteiro(separarStringNoDelimitador(horarioInicio, delimiter));
    horarioInicio = limparAteDelimitador(horarioInicio, delimiter);
    ssInicio = converterStringParaInteiro(horarioInicio);
    
    cin >> dia >> diaFim;
    //getline(cin, horarioFim);
    getline(cin >> ws, horarioFim);
    
    hhFim = converterStringParaInteiro(separarStringNoDelimitador(horarioFim, delimiter));
    horarioFim = limparAteDelimitador(horarioFim, delimiter);
    mmFim = converterStringParaInteiro(separarStringNoDelimitador(horarioFim, delimiter));
    horarioFim = limparAteDelimitador(horarioFim, delimiter);
    ssFim = converterStringParaInteiro(horarioFim);
    
    ssDuracao = ssFim - ssInicio;
    mmDuracao = mmFim - mmInicio;
    hhDuracao = hhFim - hhInicio;
    diaDuracao = diaFim - diaInicio;
    
    if (ssDuracao < 0) {
        Z = ssDuracao + 60;
        mmDuracao--;
    } else {
        Z = ssDuracao;
    }
    
    if (mmDuracao < 0) {
        Y = mmDuracao + 60;
        hhDuracao--;
    } else {
        Y = mmDuracao;
    }
    
    if (hhDuracao < 0) {
        X = hhDuracao + 24;
        diaDuracao--;
    } else {
        X = hhDuracao;
    }
    
    if (diaDuracao >= 0) {
        W = diaDuracao;
        
        cout << W << " dia(s)" << endl;
        cout << X << " hora(s)" << endl;
        cout << Y << " minuto(s)" << endl;
        cout << Z << " segundo(s)" << endl;
    }
    return 0;
}