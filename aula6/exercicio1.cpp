#include <iostream>
#include <memory>

using namespace std;

int main() {

    unique_ptr<int> ptr = make_unique<int>(42);

    cout << "Valor: " << *ptr << endl;

    return 0;
}