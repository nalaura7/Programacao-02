#include <iostream>

#include "guerreiro.h"
#include "mago.h"

using namespace std;

int main()
{
    // Vetor de ponteiros para Personagem
    Personagem* personagens[10];

    // Personagens do Mortal Kombat 11

    // Guerreiros
    personagens[0] = new Guerreiro("Scorpion");
    personagens[1] = new Guerreiro("Sub-Zero");
    personagens[2] = new Guerreiro("Liu Kang");
    personagens[3] = new Guerreiro("Jax");
    personagens[4] = new Guerreiro("Shao Kahn");

    // Magos
    personagens[5] = new Mago("Raiden");
    personagens[6] = new Mago("Shang Tsung");
    personagens[7] = new Mago("Noob Saibot");
    personagens[8] = new Mago("Sindel");
    personagens[9] = new Mago("Fujin");

    cout << "==============================" << endl;
    cout << " SIMULADOR DE COMBATE - MK11 " << endl;
    cout << "==============================" << endl;

    cout << "\nPersonagens disponiveis:\n" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << i + 1 << " - "
             << personagens[i]->getNome()
             << endl;
    }

    // Escolha dos personagens
    int escolhaJogador;
    int escolhaOponente;

    cout << "\nEscolha o seu personagem (1 a 10): ";
    cin >> escolhaJogador;

    cout << "\nEscolha o personagem do sistema (1 a 10): ";
    cin >> escolhaOponente;

    while (escolhaJogador == escolhaOponente)
    {
        cout << "\nVoce nao pode escolher o mesmo personagem!" << endl;
        cout << "Escolha outro personagem para o sistema: ";
        cin >> escolhaOponente;
    }

    Personagem* jogador = personagens[escolhaJogador - 1];
    Personagem* inimigo = personagens[escolhaOponente - 1];

    cout << "\n==============================" << endl;
    cout << "LUTA INICIADA!" << endl;
    cout << "==============================" << endl;

    cout << "\nJogador: " << jogador->getNome() << endl;
    cout << "Oponente: " << inimigo->getNome() << endl;

    int turno = 1;

    while (jogador->getVida() > 0 && inimigo->getVida() > 0)
    {
        cout << "\n==============================" << endl;
        cout << "TURNO " << turno << endl;
        cout << "==============================" << endl;

        cout << "\n1 - Atacar" << endl;
        cout << "Escolha: ";

        int opcao;
        cin >> opcao;

        if (opcao == 1)
        {
            jogador->executarGolpe(*inimigo);

            cout << "Vida de "
                 << inimigo->getNome()
                 << ": "
                 << inimigo->getVida()
                 << endl;
        }

        if (inimigo->getVida() <= 0)
            break;

        cout << "\nTurno do adversario..." << endl;

        inimigo->executarGolpe(*jogador);

        cout << "Vida de "
             << jogador->getNome()
             << ": "
             << jogador->getVida()
             << endl;

        turno++;
    }

    cout << "\n==============================" << endl;
    cout << "FIM DA LUTA!" << endl;
    cout << "==============================" << endl;

    if (jogador->getVida() > 0)
    {
        cout << "\nVENCEDOR: "
             << jogador->getNome()
             << endl;
    }
    else
    {
        cout << "\nVENCEDOR: "
             << inimigo->getNome()
             << endl;
    }

    // Libera a memória
    for (int i = 0; i < 10; i++)
    {
        delete personagens[i];
    }

    return 0;
}