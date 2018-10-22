// UVa 10038 - Jolly Jumpers

#include <iostream>
#include <set>
#include <vector>

bool IsJolly(const std::set<int> &set, int count)
{
    std::set<int>::iterator it;

    it = set.begin();
    for (int i = 1; i < count; ++i) {
        if (i != *it)
            return false;

        ++it;
    }

    return true;
}

int main()
{
    int count;
    int num;
    int diff;
    std::vector<int> inputs;
    std::set<int> diffs;

    while (std::cin >> count) {
        for (int i = 0; i < count; ++i) {
            std::cin >> num;
            inputs.push_back(num);
        }

        for (int j = 0; j < count - 1; ++j) {
            diff = abs(inputs[j + 1] - inputs[j]);
            diffs.insert(diff);
        }

        if (IsJolly(diffs, count))
            std::cout << "Jolly\n";
        else
            std::cout << "Not jolly\n";

        inputs.clear();
        diffs.clear();
    }

    return 0;
}
