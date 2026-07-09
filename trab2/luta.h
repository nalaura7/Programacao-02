#ifndef LUTA_H
#define LUTA_H

#include <vector>
#include "personagem.h"

using namespace std;

class Luta : public Personagem //herança
{
private:
    vector<Luta> personagens;

public:
    Luta();
    Luta(string nome, int vida, int ataque, int defesa);

    void soco(Personagem &inimigo) override;
    void chute(Personagem &inimigo) override; //polimorfismo

    void iniciar();
};

#endif