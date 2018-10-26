// UVa 136 - Ugly Numbers

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    int n = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    unsigned long x2, x3, x5;
    std::vector<unsigned long> ugly_nums;

    ugly_nums.push_back(1);
    x2 = 2 * ugly_nums[i];
    x3 = 3 * ugly_nums[j];
    x5 = 5 * ugly_nums[k];

    while (n < 1500) {
        ugly_nums.push_back(std::min(x2, std::min(x3, x5)));
        ++n;

        if (x2 == ugly_nums[n])
            x2 = 2 * ugly_nums[++i];

        if (x3 == ugly_nums[n])
            x3 = 3 * ugly_nums[++j];

        if (x5 == ugly_nums[n])
            x5 = 5 * ugly_nums[++k];
    }

    std::cout << "The 1500'th ugly number is " << ugly_nums[1499] << ".\n";

    return 0;
}