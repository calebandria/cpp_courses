#include <iostream>
using namespace std;
float convTempCtoF(float celsius);

int main(){
    cout << "Conversion de Celsius en Fahrenheit" << endl;
    float cels(0);

    cout << "Entrer la temperature en celsius" << endl;
    cin >> cels;

    cout << cels << "°C" << " = " << convTempCtoF(cels) << "°F" << endl;

    return 0;
}

