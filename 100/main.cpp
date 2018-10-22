#include <iostream>

using namespace std;


unsigned SequenceLen(unsigned num);
unsigned MaxOfSequence(unsigned start, unsigned end);

int main() {

    unsigned a, b;  //Input numbers

    while (cin >> a >> b)  {
        cout << a << " " << b << " " << MaxOfSequence(a, b) << "\n";
   }

    return 0;
}

unsigned SequenceLen(unsigned num)
{
    unsigned    count = 0;

    if (num != 1)  {
        num = ((num % 2)) ? (num / 2) : ((3 * num) + 1);
        count += SequenceLen(num);
    }

    return count;
}

unsigned MaxOfSequence(unsigned start, unsigned end)
{
    unsigned    count = 0;
    unsigned    max = 0;
    unsigned    num;


    if (start > end)
        swap(start, end);

    for (int k = end; k >= start; k--)  {
        num = k;
        count = 0;

        while (num != 1)  {

            if (num % 2 != 0)
                num = (3 * num) + 1;
            else
                num /= 2;

            count++;
        }

        if (count > max)
            max = count;
    }

    return max + 1;
}