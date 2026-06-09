#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    const int ANO = 2;
    const int TRIMESTRE = 4;

    double despesas[ANO][TRIMESTRE];
    double total = 0;

    for (int i = 0; i < ANO; i++) {

        cout << "\nAno " << i + 1 << endl;

        for (int j = 0; j < TRIMESTRE; j++) {

            cout << "Digite a despesa do trimestre "
                 << j + 1 << ": ";

            cin >> despesas[i][j];

            total += despesas[i][j];
        }
    }

    cout << "\n\nTABELA DE DESPESAS\n";

    for (int i = 0; i < ANO; i++) {

        cout << "Ano " << i + 1 << ": ";

        for (int j = 0; j < TRIMESTRE; j++) {

            cout << fixed << setprecision(2)
                 << despesas[i][j] << "\t";
        }

        cout << endl;
    }

    cout << "\nTotal de despesas dos dois anos: R$ "
         << fixed << setprecision(2)
         << total;

    return 0;
}