// UVa 414 - Machined Surfaces

#include <iostream>

int main() {
    unsigned n = 0;

    while ((std::cin >> n) && n) {
        std::cin.ignore();

        unsigned min_spaces = 23;
        auto *spaces = new unsigned[n];

        for (int i = 0; i < n; ++i) {
            std::string line;
            std::getline(std::cin, line);

            spaces[i] = 0;
            for (char c : line) {
                if (std::isspace(c)) {
                    ++spaces[i];
                }
            }

            min_spaces = std::min(min_spaces, spaces[i]);
        }

        unsigned rem_spaces = 0;
        for (int i = 0; i < n; ++i) {
            rem_spaces += (spaces[i] - min_spaces);
        }

        std::cout << rem_spaces << std::endl;

        delete[] spaces;
    }

    return 0;
}
