#include <iostream>
#include <iomanip>

int main() {
    char operatsiya;
    double chislo1, chislo2;

    // Dobavlyaem zagolovok
    std::cout << std::setw(30) << std::setfill('=') << "\n";
    std::cout << std::setw(15) << std::setfill(' ') << "Kalkulyator\n";
    std::cout << std::setw(30) << std::setfill('=') << "\n\n";

    // Instruktsii
    std::cout << "Dostupnye operatsii: +, -, *, /\n";
    std::cout << "Vvedite operatsiyu: ";
    std::cin >> operatsiya;

    std::cout << "Vvedite pervoe chislo: ";
    std::cin >> chislo1;

    std::cout << "Vvedite vtoroe chislo: ";
    std::cin >> chislo2;

    // Vyvod rezultata
    std::cout << std::fixed << std::setprecision(2); // Formatirovanie chisel do dvukh znakov posle zapyatoy

    switch (operatsiya) {
    case '+':
        std::cout << "Rezul'tat: " << chislo1 + chislo2 << "\n";
        break;
    case '-':
        std::cout << "Rezul'tat: " << chislo1 - chislo2 << "\n";
        break;
    case '*':
        std::cout << "Rezul'tat: " << chislo1 * chislo2 << "\n";
        break;
    case '/':
        if (chislo2 != 0.0)
            std::cout << "Rezul'tat: " << chislo1 / chislo2 << "\n";
        else
            std::cout << "Oshibka: Delenie na nol'!\n";
        break;
    default:
        std::cout << "Oshibka: Nevernaya operatsiya!\n";
    }

}