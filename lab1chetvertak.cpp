#include <iostream>
#include <vector>

void printFibonacci(int n) {
    if (n <= 0) {
        std::cout << "Кількість елементів має бути більшою за 0." << std::endl;
        return;
    }

    std::vector<long long> fib(n);
    fib[0] = 0;
    if (n > 1) {
        fib[1] = 1;
    }

    for (int i = 2; i < n; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    std::cout << "Перші " << n << " чисел Фібоначчі: ";
    for (int i = 0; i < n; ++i) {
        std::cout << fib[i] << (i == n - 1 ? "" : ", ");
    }
    std::cout << std::endl;
}

int main() {
    int count;
    std::cout << "Введіть кількість чисел Фібоначчі: ";
    if (std::cin >> count) {
        printFibonacci(count);
    } else {
        std::cout << "Некоректне введення!" << std::endl;
    }
    return 0;
}