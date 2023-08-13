#include <iostream>

long long calc(long long n) {
    if (n % 2 == 0)
        return n / 2;
    else
        return -((n + 1) / 2);
}

int main() {
    long long n;
    std::cin >> n;
    long long k = calc(n);
    std::cout << k;

    return 0;
}
