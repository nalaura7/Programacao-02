// Simulçao de Caixa

#include <iostream>
#include <string>
using namespace std;

int main (){
    double saldo = 1000;
    int opcoes;

do {
        cout << "escolha uma opcao: " << endl;
        cout << "1.Ver saldo" << endl;
        cout << "2.Depositar" << endl;
        cout << "3.Sacar" << endl;
        cout << "4.Sair" << endl;
        cin >> opcoes;
        
        switch(opcoes) {
            case 1: // Ver saldo
                cout << "Saldo: R$ " << saldo << endl;
                break;
                
            case 2: // Depositar
                {
                    double valor;
                    cout << "digite o valor para depositar: R$ ";
                    cin >> valor;
                    
                    if(valor > 0) {
                        saldo += valor;
                        cout << "deposito foi feito, agora tem: " << saldo << endl;
                    } else {
                        cout << "o valor de deposito deve ser > 0" << endl;
                    }
                }
                break;
                
            case 3: // Sacar
                {
                    double valor;
                    cout << "digite o valor para sacar: ";
                    cin >> valor;
                    
                    if(valor > 0 && valor <= saldo) {
                        saldo -= valor;
                        cout << "saque feito, agora voce tem: " << saldo << endl;
                    } else if(valor <= 0) {
                        cout << "valor de saque deve ser > 0, menin@!!" << endl;
                    } else {
                        cout << "saldo insuficiente" << endl;
                    }
                }
                break;
                
            case 4: // Sair
                cout << "obrigado, tchauzinho." << endl;
                break;
                
            default:
                cout << "invalido, tente novamente" << endl;
        }
        
    } while(opcoes != 4);

    return 0;
}