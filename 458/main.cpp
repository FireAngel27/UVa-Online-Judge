// UVa 458 - The Decoder

#include <iostream>

int main() {

    std::string code;

    while (std::getline(std::cin, code)) {
        for (char i : code) {
            std::cout << char(i - 7);
        }
        std::cout << std::endl;
    }

    return 0;
}
