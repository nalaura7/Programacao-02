#include <iostream>
using namespace std;

int main() {

    double a[100];
    double *aPtr = a;

    int quantidade;
    double soma = 0;

    cout << "Quantos valores deseja inserir (maximo 100)? ";
    cin >> quantidade;

    if (quantidade > 100 || quantidade <= 0) {
        cout << "Quantidade invalida!";
        return 1;
    }

    for (int j = 0; j < quantidade; j++) {

        cout << "Digite o valor " << j + 1 << ": ";

        cin >> *(a + j);
    }

    for (int j = 0; j < quantidade; j++) {

        soma += *(aPtr + j);
    }

    double media = soma / quantidade;

    cout << "\nSoma dos valores: " << soma << endl;
    cout << "Media dos valores: " << media << endl;

    return 0;
}