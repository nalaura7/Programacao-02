#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <string>
using namespace std;

class Personagem
{
protected:
    string nome;
    int vida;
    int ataque;
    int defesa;
    bool defendendo;

public:
    Personagem();                
    Personagem(string nome, int vida, int ataque, int defesa);
    virtual ~Personagem();
 
    virtual void soco(Personagem &inimigo) = 0;  //abstraçao
    virtual void chute(Personagem &inimigo) = 0;

    void defender();
    void receberDano(int dano);

    string getNome();
    int getVida();
};

#endif