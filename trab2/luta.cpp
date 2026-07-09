#include <iostream>
#include <cstdlib>
#include <ctime>

#include "luta.h"

using namespace std;

// constructor normal mesmo
Luta::Luta() : Personagem()
{
}

// constructor dos personagens
Luta::Luta(string nome, int vida, int ataque, int defesa)
    : Personagem(nome, vida, ataque, defesa) //herança
{
}

// soco
void Luta::soco(Personagem &inimigo)
{
    inimigo.receberDano(ataque);
}

// chutao
void Luta::chute(Personagem &inimigo)
{
    inimigo.receberDano(ataque + 5);
}

void Luta::iniciar()
{
    srand(time(NULL));

    // personagens 
    personagens.push_back(Luta("Skarlet",100,20,10));
    personagens.push_back(Luta("Sindel",100,19,11));
    personagens.push_back(Luta("Kotal Kahn",100,22,9));
    personagens.push_back(Luta("Sheeva",100,21,10));
    personagens.push_back(Luta("Kitana",100,18,12));
    personagens.push_back(Luta("Jade",100,18,13));
    personagens.push_back(Luta("Frost",100,22,8));
    personagens.push_back(Luta("Kabal",100,20,11));
    personagens.push_back(Luta("D'Vorah",100,23,8));
    personagens.push_back(Luta("Johnny Cage",100,19,12));

    cout << "\nEscolha seu personagem:\n" << endl;

    for(int i = 0; i < personagens.size(); i++)
    {
        cout << i + 1 << " - " << personagens[i].getNome() << endl;
    }

    int escolha;

    do
    {
        cout << "\ndigite sua escolha: ";
        cin >> escolha;
    }
    while(escolha < 1 || escolha > 10);

    int computador;

    do
    {
        computador = rand() % 10;
    }
    while(computador == escolha - 1);

    Luta &jogador = personagens[escolha - 1];
    Luta &inimigo = personagens[computador];

    cout << "\n" << endl;
    cout << "Voce escolheu: " << jogador.getNome() << endl;
    cout << "Computador escolheu: " << inimigo.getNome() << endl;

    // o combate aqui
    while(jogador.getVida() > 0 && inimigo.getVida() > 0)
    {
        cout << "\n" << endl;
        cout << jogador.getNome() << " - Vida: " << jogador.getVida() << endl;
        cout << inimigo.getNome() << " - Vida: " << inimigo.getVida() << endl;

        cout << "\n1 - Soco" << endl;
        cout << "2 - Chute" << endl;
        cout << "3 - Defender" << endl;

        int opcao;

        do
        {
            cout << "Escolha: ";
            cin >> opcao;
        }
        while(opcao < 1 || opcao > 3);

        if(opcao == 1)
        {
            jogador.soco(inimigo);
            cout << "\n" << jogador.getNome()
                 << " usou SOCO!" << endl;
        }
        else if(opcao == 2)
        {
            jogador.chute(inimigo);
            cout << "\n" << jogador.getNome()
                 << " usou CHUTE!" << endl;
        }
        else
        {
            jogador.defender();
            cout << "\n" << jogador.getNome()
                 << " entrou em DEFESA!" << endl;
        }

        if(inimigo.getVida() <= 0)
            break;

        int golpeCPU = rand() % 3 + 1;

        if(golpeCPU == 1)
        {
            inimigo.soco(jogador);
            cout << inimigo.getNome()
                 << " usou SOCO!" << endl;
        }
        else if(golpeCPU == 2)
        {
            inimigo.chute(jogador);
            cout << inimigo.getNome()
                 << " usou CHUTE!" << endl;
        }
        else
        {
            inimigo.defender();
            cout << inimigo.getNome()
                 << " entrou em DEFESA!" << endl;
        }
    }

    if(jogador.getVida() > 0)
    {
        cout << jogador.getNome() << " venceu a batalha!" << endl;
    }
    else
    {
        cout << inimigo.getNome() << " venceu a batalha!" << endl;
    }
}