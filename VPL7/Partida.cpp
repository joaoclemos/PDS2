#include "Partida.hpp"
#include <iostream>

Partida::Partida(Jogador jogador1, Jogador jogador2) : jogador1(jogador1), jogador2(jogador2) {
    atual = &this->jogador1;
}

Jogador& Partida::getJogadorAtual() {
    return *atual;
}

void Partida::executarJogada(int linha, int coluna) {
    char simbolo = atual->getSimbolo();
    
    if (tabuleiro.validaJogada(linha, coluna, simbolo)) {
        tabuleiro.fazerJogada(linha, coluna, simbolo);
        
        if (atual == &jogador1) {
            atual = &jogador2;
        } else {
            atual = &jogador1;
        }
    } else {
        std::cout << "jogada invalida!\n";
    }
}

char Partida::statusPartida() {
    return tabuleiro.verificarEstadoPartida();
}

void Partida::exibirPartida() {
    tabuleiro.imprimir();
}