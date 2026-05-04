#include "Defesa.hpp"
#include <iostream>

Defesa::Defesa(int id, double energia) : _id(id), _energia(energia) {}

Defesa::~Defesa() {
    std::cout << "Defesa " << _id << " desativada.\n";
}

void Defesa::_consumirEnergia(double qtd) {
    _energia -= qtd;
    if (_energia < 0) _energia = 0;
}

double Defesa::getEnergia() const {
    return _energia;
}