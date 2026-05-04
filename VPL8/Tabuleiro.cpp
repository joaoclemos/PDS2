#include "Tabuleiro.hpp"
#include <iostream>

Tabuleiro::Tabuleiro() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tabuleiro[i][j] = ' ';
        }
    }
}

bool Tabuleiro::validaJogada(int linha, int coluna, char simbolo) {
    if (linha < 0 || linha > 2 || coluna < 0 || coluna > 2) {
        return false;
    }
    if (simbolo != 'X' && simbolo != 'O') {
        return false;
    }
    if (tabuleiro[linha][coluna] != ' ') {
        return false;
    }
    return true;
}

void Tabuleiro::fazerJogada(int linha, int coluna, char simbolo) {
    tabuleiro[linha][coluna] = simbolo;
}

char Tabuleiro::verificarEstadoPartida() {
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][0] != ' ' && tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2]) {
            return tabuleiro[i][0];
        }
        if (tabuleiro[0][i] != ' ' && tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i]) {
            return tabuleiro[0][i];
        }
    }
    
    if (tabuleiro[0][0] != ' ' && tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2]) {
        return tabuleiro[0][0];
    }
    if (tabuleiro[0][2] != ' ' && tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0]) {
        return tabuleiro[0][2];
    }

    bool temEspaco = false;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tabuleiro[i][j] == ' ') {
                temEspaco = true;
            }
        }
    }

    if (!temEspaco) {
        return 'E';
    }

    return 'P';
}

void Tabuleiro::imprimir() {
    for (int i = 0; i < 3; i++) {
        std::cout << " " << tabuleiro[i][0] << " | "
                  << tabuleiro[i][1] << " | "
                  << tabuleiro[i][2] << "\n";
        if (i < 2) {
            std::cout << "-----------\n";
        }
    }
}