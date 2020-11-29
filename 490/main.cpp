// UVa 490 - Rotating Sentences

#include <iostream>
#include <algorithm>
#include <vector>

#define MAX_LINES   100

int main() {
    std::string line;
    std::vector<std::string> lines;
    unsigned max_length_of_line = 0;

    lines.reserve(MAX_LINES);
    while (std::getline(std::cin, line)) {
        lines.push_back(line);

        max_length_of_line =
            std::max(max_length_of_line, static_cast<unsigned>(line.size()));
    }

    for (int col = 0; col < max_length_of_line; ++col) {
        for (int row = lines.size() - 1; row >= 0; --row) {
            if (lines.at(row).size() > col) {
                std::cout << lines.at(row).at(col);
            }
            else {
                std::cout << " ";
            }
        }

        std::cout << std::endl;
    }

    return 0;
}
