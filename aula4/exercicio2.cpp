#include <iostream>
using namespace std;

int soma(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o segundo numero: ";
    cin >> num2;

    int resultado = soma(num1, num2);

    cout << "\nSoma = " << resultado;

    return 0;
}