//classe filha de personagem
#include "guerreiro.h"

Guerreiro::Guerreiro(string nome)
    : Personagem(nome, 100, 20, 5)
{

}

void Guerreiro::executarGolpe(Personagem &inimigo)
{

    cout << "\n" << nome << " usou ESPADADA!" << endl;

    int dano = ataque + 10;

    inimigo.receberDano(dano);

}