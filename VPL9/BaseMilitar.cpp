#include "BaseMilitar.hpp"
#include <iostream>
#include <iomanip>

BaseMilitar::BaseMilitar() : _qtdAtual(0) {}

BaseMilitar::~BaseMilitar() {
    for (int i = 0; i < _qtdAtual; i++) {
        delete _defesas[i];
    }
}

void BaseMilitar::adicionarDefesa(Defesa* d) {
    if (_qtdAtual < 100) {
        _defesas[_qtdAtual] = d;
        _qtdAtual++;
    }
}

void BaseMilitar::defender(double &saudeInimigo) {
    double danoTurno = 0.0;
    for (int i = 0; i < _qtdAtual; i++) {
        _defesas[i]->atacar(danoTurno);
    }
    
    saudeInimigo -= danoTurno;
    if (saudeInimigo < 0) saudeInimigo = 0;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Saude Inimigo: " << saudeInimigo << "\n";
}