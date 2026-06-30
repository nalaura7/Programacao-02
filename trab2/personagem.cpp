//classe pai abstrata
#include "personagem.h"

Personagem::Personagem(string nome, int vida, int ataque, int defesa) {

    this->nome = nome;
    this->vida = vida;
    this->ataque = ataque;
    this->defesa = defesa;
}

Personagem::~Personagem() {

}

string Personagem::getNome() {
    return nome;
}

int Personagem::getVida() {
    return vida;
}

int Personagem::getAtaque() {
    return ataque;
}

int Personagem::getDefesa() {
    return defesa;
}

void Personagem::setVida(int vida) {
    this->vida = vida;
}

void Personagem::receberDano(int dano) {

    dano = dano - defesa;

    if (dano < 0)
        dano = 0;

    vida -= dano;

    if (vida < 0)
        vida = 0;
}