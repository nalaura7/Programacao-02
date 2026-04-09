#include <iostream>
#include <iomanip> //biblioteca pra conseguir manipular (editar) a saída do jeitinho que a gente gosta
#include <string>
using namespace std;

int main (){
    string nome;
    float salario;

    cout << " digite seu nome: " << endl;
    getline (cin, nome);

    cout << "digite seu salário: " << endl;
    cin >> salario;

    cout << "Nome: " << nome << endl;
    cout << "Salário: " << fixed << setprecision(2) << salario << endl;

    return 0;
}