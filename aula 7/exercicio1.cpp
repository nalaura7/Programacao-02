#include <iostream>
#include <string>

using namespace std;

class Gato {

private:
    string nome;
    int idade;
    double peso;

public:

    Gato(string n, int i, double p) {
        nome = n;
        idade = i;

        if (p > 0)
            peso = p;
        else
            peso = 1;
    }

    void setPeso(double p) {

        if (p > 0) {
            peso = p;
        }
        else {
            cout << "Peso invalido!" << endl;
        }
    }

    void exibir() {
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << endl;
        cout << "Peso: " << peso << " kg" << endl;
    }
};

int main() {

    Gato gato1("Mingau", 3, 4.5);

    gato1.exibir();

    cout << "\nAlterando peso...\n";

    gato1.setPeso(5.2);

    gato1.exibir();

    return 0;
}