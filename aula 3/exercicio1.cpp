#include <iostream>
#include <string>
using namespace std;

int main() {
    int idade, autorizacao, nivel;
    cout << "digite sua idade:" << endl;
    cin >> idade;
    
    if (idade < 16) {
        cout << "acesso negado" <<  endl;
    } else if ((idade == 16) || (idade == 17)){
        cout << "precisa de autorizacao"<< endl;
    } else  if (idade >= 18) {
        cout << "acesso com niveis e seu nivel é:" << endl;
    } else {
        cout << "inválido" << endl;
    }
    
    switch (idade) {
        case 18: 
            cout << "basico" << endl;
            break;
        case 19:
            cout << "intermediario" << endl;
            break;
        case 20: 
            cout << "totaaalll" << endl;
    }
    
    
    return 0;
}