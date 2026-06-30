#include <iostream>
#include <string>
using namespace std;

class MatrizDinamica {
private:
    int linhas;
    int colunas;
    int **matriz;

public:

    MatrizDinamica(int l, int c) {
        linhas = l;
        colunas = c;

        matriz = new int*[linhas];

        for (int i = 0; i < linhas; i++) {
            matriz[i] = new int[colunas];

            for (int j = 0; j < colunas; j++) {
                matriz[i][j] = 0;
            }
        }
    }

    MatrizDinamica(const MatrizDinamica &outra) {

        linhas = outra.linhas;
        colunas = outra.colunas;

        matriz = new int*[linhas];

        for (int i = 0; i < linhas; i++) {

            matriz[i] = new int[colunas];

            for (int j = 0; j < colunas; j++) {
                matriz[i][j] = outra.matriz[i][j];
            }
        }
    }

    void setValor(int l, int c, int valor) {
        matriz[l][c] = valor;
    }

    void mostrar() {
        for (int i = 0; i < linhas; i++) {

            for (int j = 0; j < colunas; j++) {
                cout << matriz[i][j] << " ";
            }

            cout << endl;
        }
    }

    ~MatrizDinamica() {

        for (int i = 0; i < linhas; i++) {
            delete[] matriz[i];
        }

        delete[] matriz;
    }
};

int main() {

    MatrizDinamica m1(2,2);

    m1.setValor(0,0,5);
    m1.setValor(1,1,10);

    MatrizDinamica m2 = m1;

    cout << "Matriz Original";
    m1.mostrar();

    cout << "\nCopia\n";
    m2.mostrar();

    return 0;
}