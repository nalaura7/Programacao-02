#include <iostream>

using namespace std;

class Termometro {

private:
    double temperaturaCelsius;

public:

    Termometro() {
        temperaturaCelsius = 25.0;
    }

    void setTemperaturaCelsius(double temp) {

        if (temp >= -273.15) {
            temperaturaCelsius = temp;
        }
        else {
            cout << "Temperatura invalida!" << endl;
        }
    }

    double getTemperaturaCelsius() {
        return temperaturaCelsius;
    }

    double getTemperaturaFahrenheit() {
        return (temperaturaCelsius * 9 / 5) + 32;
    }
};

int main() {

    Termometro t;

    cout << "Temperatura inicial: "
         << t.getTemperaturaCelsius()
         << " C" << endl;

    t.setTemperaturaCelsius(30);

    cout << "Celsius: "
         << t.getTemperaturaCelsius()
         << " C" << endl;

    cout << "Fahrenheit: "
         << t.getTemperaturaFahrenheit()
         << " F" << endl;

    return 0;
}