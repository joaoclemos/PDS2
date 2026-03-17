#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    ifstream arquivo("palavras.txt");
    int n, escolha;
    string chave, tentativa, erradas = "";
    bool ganhou = false;

    arquivo >> n;
    cin >> escolha;

    for (int i = 0; i < escolha; i++) {
        arquivo >> chave;
    }
    arquivo.close();

    for (int t = 0; t < 5; t++) {
        cin >> tentativa;

        if (tentativa == chave) {
            cout << tentativa << " (" << erradas << ")" << endl;
            cout << "GANHOU!" << endl;
            ganhou = true;
            break;
        }

        string resultado = "";
        for (int i = 0; i < 5; i++) {
            if (tentativa[i] == chave[i]) {
                resultado += tentativa[i];
            } else if (chave.find(tentativa[i]) != string::npos) {
                resultado += (char)tolower(tentativa[i]);
            } else {
                resultado += "*";
                if (erradas.find(tentativa[i]) == string::npos) {
                    erradas += tentativa[i];
                }
            }
        }
        cout << resultado << " (" << erradas << ")" << endl;
    }

    if (!ganhou) {
        cout << "PERDEU! " << chave << endl;
    }

    return 0;
}