#include <iostream>
#include "BaseMilitar.hpp"
#include "Canhao.hpp"
#include "CanhaoOrbital.hpp"
#include "LancadorMissil.hpp"

int main() {
    BaseMilitar base;
    char cmd;
    int id, misseis;
    double energia, intensidade, gravidade, vidaInimigo;

    while (std::cin >> cmd && cmd != 's') {
        if (cmd == 'c') {
            std::cin >> id >> energia >> intensidade;
            base.adicionarDefesa(new Canhao(id, energia, intensidade));
        } else if (cmd == 'o') {
            std::cin >> id >> energia >> intensidade >> gravidade;
            base.adicionarDefesa(new CanhaoOrbital(id, energia, intensidade, gravidade));
        } else if (cmd == 'm') {
            std::cin >> id >> energia >> misseis;
            base.adicionarDefesa(new LancadorMissil(id, energia, misseis));
        } else if (cmd == 'd') {
            std::cin >> vidaInimigo;
            base.defender(vidaInimigo);
        }
    }

    return 0;
}