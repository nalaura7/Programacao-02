#include <iostream>

using namespace std;

class ContaBancaria {

private:
    int numeroConta;
    double saldo;

public:

    ContaBancaria(int numero) {
        numeroConta = numero;
        saldo = 0;
    }

    double getSaldo() {
        return saldo;
    }

    void depositar(double valor) {

        if (valor > 0) {
            saldo += valor;
        }
    }

    void sacar(double valor) {

        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
        }
        else {
            cout << "Saldo insuficiente!" << endl;
        }
    }
};

int main() {

    ContaBancaria conta(12345);

    conta.depositar(1000);

    cout << "Saldo atual: R$ "
         << conta.getSaldo()
         << endl;

    conta.sacar(300);

    cout << "Saldo atual: R$ "
         << conta.getSaldo()
         << endl;

    return 0;
}