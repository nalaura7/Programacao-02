#include <iostream>
#include <string>
using namespace std;

class Veiculo {

public:

    string marca;

    virtual void emitirSom() {
        cout << "O veiculo faz um ruido no motor." << endl;
    }

};

class Carro : public Veiculo {

public:

    int numeroPortas;

    void emitirSom() override {
        cout << "Biiiiii! Biiiiii!" << endl;
    }

};

int main() {

    Carro carro;

    carro.marca = "Honda";
    carro.numeroPortas = 4;

    cout << "Marca: " << carro.marca << endl;
    cout << "Portas: " << carro.numeroPortas << endl;

    carro.emitirSom();

    return 0;
}