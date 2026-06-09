#include <iostream>
using namespace std;

inline double converter(double dolar) {
    return dolar * 5.50;
}

int main() {
    double valorDolar;

    cout << "Digite a quantia em dolares: ";
    cin >> valorDolar;

    double valorReal = converter(valorDolar);

    cout << "\nValor em reais: R$ " << valorReal;

    return 0;
}