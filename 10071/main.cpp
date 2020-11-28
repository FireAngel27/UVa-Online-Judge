// UVa 10071 - Back to High School Physics

#include <iostream>

int main() {

    int v = 0;
    unsigned t = 0;

    while (std::cin >> v >> t) {
        std::cout << (2 * v * t) << std::endl;
    }

    return 0;
}
