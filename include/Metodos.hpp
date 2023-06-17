#include <iostream>
#include <cmath>


class BisectionMethod {
private:
    double a, b, tol;
    int maxlter;

public:
    BisectionMethod(double a, double b, double tol, int maxlter)
        : a(a), b(b), tol(tol), maxlter(maxlter) {}

    double f(double x) {
        return x * x * x - 7;
    }

    void imprimePuntos() {
        const int INTERVALOS = 6;
        int puntos = INTERVALOS + 1;

        double ancho = (b - a) / INTERVALOS;

        std::cout << "\n";
        std::cout << "\tx\tf(x)\n" << std::endl;

        for (int i = 0; i < puntos; i++) {
            std::cout << "\t" << a << "\t" << f(a) << std::endl;
            a = a - 1;
        }
    }

    double biseccion() {
        double c = 0, EA = 0, temp;
        int nolter = 0;

        do {
            temp = c;
            c = (a + b) / 2;
            EA = std::abs(c - temp);
            std::cout << nolter << "\t" << a << "\t" << b << "\t" << c << "\t" << f(c) << "\t" << EA << std::endl;

            if (f(a) * f(c) < 0) {
                b = c;
            } else {
                a = c;
            }

            EA = std::abs(c - temp);
            nolter++;
        } while ((EA > tol) && (nolter < maxlter));

        return c;
    }
};