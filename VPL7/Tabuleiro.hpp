#ifndef TABULEIRO_HPP
#define TABULEIRO_HPP

class Tabuleiro {
private:
    char tabuleiro[3][3];

public:
    Tabuleiro();
    bool validaJogada(int linha, int coluna, char simbolo);
    void fazerJogada(int linha, int coluna, char simbolo);
    char verificarEstadoPartida();
    void imprimir();
};

#endif