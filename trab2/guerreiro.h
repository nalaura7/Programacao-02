#ifndef GUERREIRO_H
#define GUERREIRO_H

#include "personagem.h"

class Guerreiro : public Personagem {

public:

    // construtor
    Guerreiro(string nome);

    // sobrescrita do método virtual
    void executarGolpe(Personagem &inimigo) override;

};

#endif