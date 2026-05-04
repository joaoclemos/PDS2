#ifndef PARTIDA_HPP
#define PARTIDA_HPP

#include "Jogador.hpp"
#include "Tabuleiro.hpp"

class Partida {
private:
    Tabuleiro tabuleiro;
    Jogador jogador1;
    Jogador jogador2;
    Jogador* atual;

public:
    Partida(Jogador jogador1, Jogador jogador2);
    Jogador& getJogadorAtual();
    void executarJogada(int linha, int coluna);
    char statusPartida();
    void exibirPartida();
};

#endif