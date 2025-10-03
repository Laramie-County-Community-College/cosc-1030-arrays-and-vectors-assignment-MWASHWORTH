#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
    int NumFlips;
    vector <string> coinFlips;

    cout << "Enter how many coin flips there will be: ";
    cin >> NumFlips;
    coinFlips.resize(NumFlips);
    srand(NumFlips);

    for (int i = 0; i < NumFlips; ++i) {
        int thisRandomNumber = rand();
        if ((thisRandomNumber % 2) == 0) {
            coinFlips[i] = "Heads";
        }
        else {
            coinFlips[i] = "Tails";
        }
    }

    int headsCount = 0;

    for (const auto& flip : coinFlips) {
        if (flip == "Heads") {
            ++headsCount;
        }
    }
    std::cout << "Number of Heads: " << headsCount << '\n';
    std::cout << "Number of Tails: " << coinFlips.size() - headsCount << '\n';

    return 0;
}