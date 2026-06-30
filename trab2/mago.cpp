// classe filha de personagem
#include "mago.h"

Mago::Mago(string nome)
    : Personagem(nome, 80, 25, 3)
{

}

void Mago::executarGolpe(Personagem &inimigo)
{

    cout << "\n" << nome << " usou BOLA DE FOGO!" << endl;

    int dano = ataque + 15;

    inimigo.receberDano(dano);

}