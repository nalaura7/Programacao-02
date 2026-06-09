#include <iostream>
#include <queue>

using namespace std;

int main() {

    queue<string> documentos;

    int opcao;
    string doc;

    do {

        cout << "\n===== FILA =====" << endl;
        cout << "1 - Adicionar documento" << endl;
        cout << "2 - Processar documento" << endl;
        cout << "3 - Mostrar proximo documento" << endl;
        cout << "0 - Sair" << endl;
        cout << "Opcao: ";
        cin >> opcao;

        switch(opcao) {

            case 1:

                cout << "Nome do documento: ";
                cin >> doc;

                documentos.push(doc);

                break;

            case 2:

                if(!documentos.empty()) {

                    cout << "Processando: "
                         << documentos.front()
                         << endl;

                    documentos.pop();
                }
                else {

                    cout << "Fila vazia!" << endl;
                }

                break;

            case 3:

                if(!documentos.empty()) {

                    cout << "Proximo: "
                         << documentos.front()
                         << endl;
                }
                else {

                    cout << "Fila vazia!" << endl;
                }

                break;
        }

    } while(opcao != 0);

    return 0;
}