#include <iostream>
#include <cmath>

using namespace std;

double calcularAreaCirculo(double radio) {
    return M_PI * radio * radio;
}

int main() {
    int a;
    double radio;
    cout << "Ingresa el radio del circulo: ";
    cin >> radio;
    
    double area = calcularAreaCirculo(radio);
    cout << "El area del circulo es: " << area << endl;
    cin >> a;
    return 0;
}
