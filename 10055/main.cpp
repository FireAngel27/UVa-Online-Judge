#include <iostream>

int main()
{
    long long first = 0;
    long long second = 0;

    while (std::cin >> first >> second) {
        std::cout << (first > second ? first - second : second - first) << "\n";
    }

    return 0;
}