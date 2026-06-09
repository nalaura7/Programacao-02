#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {

    stack<string> palavras;

    int opcao;
    string palavra;

    do {

        cout << "\n===== EDITOR =====" << endl;
        cout << "1 - Digitar palavra" << endl;
        cout << "2 - Desfazer ultima palavra" << endl;
        cout << "3 - Mostrar ultima palavra" << endl;
        cout << "0 - Sair" << endl;
        cout << "Opcao: ";
        cin >> opcao;

        switch(opcao) {

            case 1:

                cout << "Digite a palavra: ";
                cin >> palavra;

                palavras.push(palavra);

                break;

            case 2:

                if(!palavras.empty()) {

                    cout << "Removendo: "
                         << palavras.top()
                         << endl;

                    palavras.pop();
                }
                else {

                    cout << "Pilha vazia!" << endl;
                }

                break;

            case 3:

                if(!palavras.empty()) {

                    cout << "Ultima palavra: "
                         << palavras.top()
                         << endl;
                }
                else {

                    cout << "Pilha vazia!" << endl;
                }

                break;
        }

    } while(opcao != 0);

    return 0;
}