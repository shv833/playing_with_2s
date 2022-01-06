#include <iostream>

int bitwiseComplement(int n) {
    int base = 1;

    if (n == 0)
        return 1;

    while (n >= base)
        base <<= 1;

    return (~n + base);
}

int main() {
    int n;
    std::cin >> n;
    return bitwiseComplement(n);
}