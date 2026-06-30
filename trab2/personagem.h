#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <iostream>
#include <string>

using namespace std;

class Personagem {

protected: //usei protected porque as classes guerreiro e Mmago vao precisar acessar esses atributos diretamente

    string nome;
    int vida;
    int ataque;
    int defesa;

public:

    // construtor
    Personagem(string nome, int vida, int ataque, int defesa);

    // destrutor virtual
    virtual ~Personagem();

    // get
    string getNome();
    int getVida();
    int getAtaque();
    int getDefesa();

    // set
    void setVida(int vida);

    // receber dano
    void receberDano(int dano);

    // método virtual puro
    virtual void executarGolpe(Personagem &inimigo) = 0;

};

#endif