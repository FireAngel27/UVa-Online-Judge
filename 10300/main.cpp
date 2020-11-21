// UVa 10300 - Ecological Premium

#include <iostream>

int main()
{
    unsigned test_cases;
    unsigned number_of_farmers;

    unsigned size_of_farmyard;
    unsigned number_of_animals;
    unsigned environment_friendliness;

    std::cin >> test_cases;

    for (int i = 0; i < test_cases; ++i) {
        std::cin >> number_of_farmers;

        unsigned final_premium = 0;
        for (int j = 0; j < number_of_farmers; ++j) {
            std::cin >> size_of_farmyard >> number_of_animals >> environment_friendliness;
            final_premium += (size_of_farmyard * environment_friendliness);
        }

        std::cout << final_premium << std::endl;
    }

    return 0;
}
