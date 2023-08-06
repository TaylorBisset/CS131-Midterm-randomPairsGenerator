/*
Construct a C++ program that satisfies the following requirements:

Develop a function called randomPairsGenerator that generates and displays pairs of random numbers, with a maximum of 5 pairs per line.
Within this function, use a loop to create 20 pairs of random numbers:
a)       The first number in each pair should be within the range of 1 to 50, inclusive.
b)      The second number in each pair should be within the range of 51 to 100, inclusive.
For each pair, print the two numbers side by side, separated by a space. Separate each pair with a comma.
After every 5 pairs, start a new line.
After all 20 pairs have been generated, display the total count of pairs in which the sum of the two numbers is divisible by 7.
*/

#include <iostream>
#include <ctime>

using namespace std;

auto randomPairsGenerator()
{
    srand(time(0));
    int count = 0;

    for (int i = 1; i <= 20; i++)
    {
        int num1 = (rand() % 50) + 1;
        int num2 = (rand() % 50) + 51;
        cout << num1 << " " << num2;

        if ((i % 5 == 0) && (i != 0))
        {
            cout << endl;
        }
        else
        {
            cout << ", ";
        }

        if ((num1 + num2) % 7 == 0)
        {
            count++;
        }
    }

    cout << "\nPairs with sums divisible by 7: " << count << endl;

    return;
}

int main()
{
    randomPairsGenerator();
    return 0;
}

// 18 minutes