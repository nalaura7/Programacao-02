#include <iostream>
using namespace std;

struct Data {
    int dia;
    int mes;
    int ano;
};

int main() {
    Data hoje;

    cout << "Digite o dia: ";
    cin >> hoje.dia;

    cout << "Digite o mes: ";
    cin >> hoje.mes;

    cout << "Digite o ano: ";
    cin >> hoje.ano;

    cout << "\nData informada: ";
    cout << hoje.dia << "/" << hoje.mes << "/" << hoje.ano;

    return 0;
}