#include<Metodos.hpp>
//#pragma once
using namespace std;


int main() {
    double a, b, tol, raiz;
    int maxlter;

    std::cout << "\nCalculo de las raices de una funcion aplicando el metodo de la biseccion" << std::endl;
    std::cout << "\nIngrese el intervalo inicial [a, b]" << std::endl;
    std::cout << "\na = ";
    std::cin >> a;

    std::cout << "b = ";
    std::cin >> b;

    BisectionMethod method(a, b, 0.0, 0);
    method.imprimePuntos();

    std::cout << "\nEscoja el intervalo adecuado" << std::endl;
    std::cout << "\na = ";
    std::cin >> a;

    std::cout << "b = ";
    std::cin >> b;

    if (method.f(a) * method.f(b) > 0) {
        std::cout << "\nNo se puede aplicar el metodo de la biseccion\n";
        std::cout << "porque f(" << a << ") y f(" << b << ") tienen el mismo signo" << std::endl;
    } else {
        std::cout << "por favor digite tol:  ";
        std::cin >> tol;
        std::cout << "por favor digite maxlter:  ";
        std::cin >> maxlter;

        BisectionMethod method2(a, b, tol, maxlter);
        raiz = method2.biseccion();
        std::cout << "La raiz es: " << raiz << std::endl;
    }

    system("pause");
    return 0;
}
 