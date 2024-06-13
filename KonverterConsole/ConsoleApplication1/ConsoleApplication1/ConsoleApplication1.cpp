#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    // Курсы валют относительно доллара США
    double rates[8] = { 1.0, 0.89, 74.57, 0.77, 1.33, 109.49, 7.76, 0.92 };
    std::string currencies[8] = { "USD", "EUR", "RUB", "GBP", "CAD", "JPY", "HKD", "CHF" };

    double amount;
    int fromCurrency, toCurrency;

    std::cout << "Конвертер валют на C++\n";
    std::cout << "Выберите валюту для конвертации:\n";
    for (int i = 0; i < 8; ++i) {
        std::cout << i + 1 << ". " << currencies[i] << "\n";
    }

    std::cout << "Из валюты (1-8): ";
    std::cin >> fromCurrency;

    std::cout << "В валюту (1-8): ";
    std::cin >> toCurrency;

    std::cout << "Введите сумму для конвертации: ";
    std::cin >> amount;

    // Конвертация
    double convertedAmount = (amount / rates[fromCurrency - 1]) * rates[toCurrency - 1];

    std::cout << "Конвертированная сумма: " << convertedAmount << " " << currencies[toCurrency - 1] << std::endl;

    return 0;
}