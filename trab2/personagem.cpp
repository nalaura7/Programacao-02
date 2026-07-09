#include "personagem.h"

Personagem::Personagem()
{
    nome = "";
    vida = 0;
    ataque = 0;
    defesa = 0;
    defendendo = false;
}

Personagem::Personagem(string nome, int vida, int ataque, int defesa)
{
    this->nome = nome;  //ponteiro
    this->vida = vida;
    this->ataque = ataque;
    this->defesa = defesa;
    this->defendendo = false;
}

Personagem::~Personagem()
{
}

void Personagem::defender()
{
    defendendo = true;
}

void Personagem::receberDano(int dano)
{
    if(defendendo)
    {
        dano = dano / 2;
        defendendo = false;
    }

    dano = dano - defesa;

    if(dano < 1)
    {
        dano = 1;
    }

    vida = vida - dano;

    if(vida < 0)
    {
        vida = 0;
    }
}

string Personagem::getNome()
{
    return nome;
}

int Personagem::getVida()
{
    return vida;
}