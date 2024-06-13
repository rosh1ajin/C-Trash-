#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, double> rates = {
        {"USD", 1.0},
        {"EUR", 0.85},
        {"JPY", 110.57},
        {"GBP", 0.72},
        {"AUD", 1.30},
        {"CAD", 1.21},
        {"CHF", 0.92},
        {"CNY", 6.45},
        {"SEK", 8.58},
        {"NZD", 1.42},
        {"MXN", 20.25},
        {"SGD", 1.34},
        {"HKD", 7.77},
        {"NOK", 8.56},
        {"KRW", 1138.22}
    };

    while (true) {
        std::string from, to;
        double amount;

        std::cout << "-----------------------------\n";
        std::cout << "Dostupnye valyuty: ";
        for (const auto& pair : rates) {
            std::cout << pair.first << " (" << pair.second << ") ";
        }
        std::cout << '\n';
        std::cout << "Vvedite ishodnuyu valyutu: ";
        std::cin >> from;
        std::cout << "Vvedite tselevuyu valyutu: ";
        std::cin >> to;
        std::cout << "Vvedite summu: ";
        std::cin >> amount;
        std::cout << "-----------------------------\n";

        if (rates.find(from) == rates.end() || rates.find(to) == rates.end()) {
            std::cout << "Neizvestnaya valyuta.\n";
            continue;
        }

        double result = amount / rates[from] * rates[to];
        std::cout << "Rezultat: " << result << ' ' << to << '\n';
    }

    return 0;
}