#include "Carro.hpp"
#include <cmath>
#include <iostream>
#include <iomanip>

Carro::Carro(double x, double y, double th) : x(x), y(y), th(th) {}

double Carro::getX() { return x; }
double Carro::getY() { return y; }
double Carro::getTH() { return th; }

void Carro::girar(double w, double t) {
    th += w * t;
}

void Carro::mover(double v, double t) {
    x += v * t * cos(th);
    y += v * t * sin(th);
}

double Carro::calcular_angulo_pessoa(Pessoa* p) {
    double ang = atan2(p->y - y, p->x - x) - th;
    while (ang > M_PI) ang -= 2 * M_PI;
    while (ang < -M_PI) ang += 2 * M_PI;
    return ang;
}

double Carro::calcular_distancia_pessoa(Pessoa* p) {
    return sqrt(pow(p->x - x, 2) + pow(p->y - y, 2));
}

bool Carro::movimentacao_permitida(Pessoa** pessoas, int n) {
    bool livre = true;
    for (int i = 0; i < n; i++) {
        double d = calcular_distancia_pessoa(pessoas[i]);
        double a = calcular_angulo_pessoa(pessoas[i]) * 180.0 / M_PI;
        if (d < 5.0 && a >= -45.0 && a <= 45.0) {
            std::cout << "Alerta! " << i << "\t" << std::fixed << std::setprecision(2) << a << "\t" << d << std::endl;
            livre = false;
        }
    }
    return livre;
}

void Carro::navegar(Pessoa** pessoas, int n, double w, double v, double t) {
    if (movimentacao_permitida(pessoas, n)) {
        girar(w, t);
        mover(v, t);
    }
}