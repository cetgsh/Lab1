#include <iostream>
#include <vector>

// Функція для розрахунку та виводу послідовності чисел Фібоначчі
void printFibonacci(int n) {
    if (n <= 0) {
        std::cout << "The number of elements must be greater than 0." << std::endl;
        return;
    }

    // Створюємо вектор для збереження послідовності
    std::vector<long long> fib(n);
    fib[0] = 0;
    if (n > 1) {
        fib[1] = 1;
    }

    // Заповнюємо вектор за формулою Фібоначчі
    for (int i = 2; i < n; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Виводим результат у консоль
    std::cout << "First " << n << " Fibonacci numbers: ";
    for (int i = 0; i < n; ++i) {
        std::cout << fib[i] << (i == n - 1 ? "" : ", ");
    }
    std::cout << std::endl;
}

int main() {
    int count;
    std::cout << "Enter the number of Fibonacci numbers: ";

    // Перевірка коректності введення даних
    if (std::cin >> count) {
        printFibonacci(count);
    }
    else {
        std::cout << "Invalid input!" << std::endl;
    }

    return 0;
}