#include <iostream>
#include <string>
using namespace std;

class StringSegura {

private:
    string texto;

public:

    StringSegura(string t) : texto(t) {}

    // Construtor padrão
    StringSegura() = default;

    // Permite mover objetos
    StringSegura(StringSegura&&) = default;

    // Permite atribuição por movimento
    StringSegura& operator=(StringSegura&&) = default;

    // Permite construtor de cópia
    StringSegura(const StringSegura&) = default;

    // PROÍBE atribuição por cópia
    StringSegura& operator=(const StringSegura&) = delete;

    void mostrar() {
        cout << texto << endl;
    }

};

int main() {

    StringSegura s1("Programacao II");

    StringSegura s2(s1);   // permitido

    s2.mostrar();

    // StringSegura s3;
    // s3 = s1;
    // ERRO: operador de atribuição deletado

    return 0;
}