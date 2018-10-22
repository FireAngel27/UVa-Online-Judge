// UVa 136 - Ugly Numbers

#include <iostream>
#include <set>

int main()
{
    int count = 0;
    int factors[3] = {2, 3, 5};
    unsigned long num;
    std::set<unsigned long> ugly_seq;
    std::set<unsigned long>::iterator it;

    ugly_seq.insert(1);
    ++count;

    while (count < 1500) {
        for (unsigned long i : ugly_seq) {
            for (int j = 0; j < 3; ++j) {
                num = i * factors[j];

                // if number isn't in set
                if (ugly_seq.find(num) == ugly_seq.end()) {
                    ugly_seq.insert(num);
                    ++count;
                }
            }
        }
    }

    int i = 0;
    for (it = ugly_seq.begin(); it != ugly_seq.end(), i < 1500; ++it) {
        ++i;
        //std::cout << i++ << ".\t" << *it << std::endl;
    }
    std::cout << "The 1500'th ugly number is " << *it << std::endl;


    return 0;
}