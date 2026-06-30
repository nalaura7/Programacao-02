#ifndef MAGO_H
#define MAGO_H

#include "personagem.h"

class Mago : public Personagem {

public:

    // Construtor
    Mago(string nome);

    // Sobrescreve o método da classe base
    void executarGolpe(Personagem &inimigo) override;

};

#endif