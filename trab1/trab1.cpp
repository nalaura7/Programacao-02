#include <iostream>
#include <iomanip> // deixar a média com 2 casas decimais
using namespace std;

int main() {
    float matriz[4][4];
    float soma = 0, media, soma_acima = 0;
    int count = 0;

    // leitura da matriz
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cout << "Digite um valor para a matriz 4x4:" << endl;
            cin >> matriz[i][j];
            soma += matriz[i][j];
        }
    }

    // mostrar matriz
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    // média geral
    media = soma / 16;
    cout << fixed << setprecision(2);
    cout << "media de todos elementos da matriz: " << media << endl;

    // valores acima da média
    cout << "Valores acima da media: ";

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(matriz[i][j] > media) {
                cout << matriz[i][j] << " ";
                soma_acima += matriz[i][j];
                count++;
            }
        }
    }
    cout << endl;

     for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            if(matriz[i][j] < media) {
                matriz[i][j] = -1;
            }
        }
    }
       // mostrar matriz
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    // média dos valores acima
    if(count > 0) {
        float media_acima = soma_acima / count;
        cout << "media dos valores acima da media: " << media_acima << endl;
    } else {
        cout << "nao tem";
    }
    return 0;
}