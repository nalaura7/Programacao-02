#include <iostream>
#include <string>
using namespace std;

class Contador {
private:
    int valor;

public:

    Contador(int v = 0) {

        if(v >= 0)
            valor = v;
        else
            valor = 0;
    }

    // Pré-incremento
    Contador& operator++() {

        valor++;
        return *this;
    }

    Contador operator++(int) {

        Contador temp = *this;
        valor++;
        return temp;
    }

    void mostrar() {

        cout << valor << endl;
    }

};

int main() {

    Contador c(10);

    cout << "valor inicial: ";
    c.mostrar();
    ++c;

    cout << "depois do pre-incremento: ";
    c.mostrar();
    c++;

    cout << "depois do pos-incremento: ";
    c.mostrar();

    return 0;
}