#include <iostream>
#include <list>

using namespace std;

int main() {

    list<int> minhaLista;
    int opcao;
    int valor;

    do {

        cout << "\n===== MENU =====" << endl;
        cout << "1 - Inserir no inicio" << endl;
        cout << "2 - Inserir no final" << endl;
        cout << "3 - Remover valor" << endl;
        cout << "4 - Mostrar lista" << endl;
        cout << "5 - Mostrar tamanho" << endl;
        cout << "0 - Sair" << endl;
        cout << "Opcao: ";
        cin >> opcao;

        switch(opcao) {

            case 1:
                cout << "Valor: ";
                cin >> valor;
                minhaLista.push_front(valor);
                break;

            case 2:
                cout << "Valor: ";
                cin >> valor;
                minhaLista.push_back(valor);
                break;

            case 3:
                cout << "Valor para remover: ";
                cin >> valor;
                minhaLista.remove(valor);
                break;

            case 4:
                cout << "Lista: ";

                for(int item : minhaLista) {
                    cout << item << " ";
                }

                cout << endl;
                break;

            case 5:
                cout << "Tamanho da lista: "
                     << minhaLista.size()
                     << endl;
                break;
        }

    } while(opcao != 0);

    return 0;
}