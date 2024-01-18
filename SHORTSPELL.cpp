#include <iostream>
#include <string>

using namespace std;

string removeLastNonIncreasing(string input) {
    int length = input.length();
    int lastNonIncreasingIndex = -1;

    for (int i = 0; i < length - 1; i++) {
        if (input[i] > input[i + 1]) {
            lastNonIncreasingIndex = i;
            break;
        }
    }

    if (lastNonIncreasingIndex == -1) {
        lastNonIncreasingIndex = length - 1;
    }

    string result = "";
    for (int i = 0; i < length; i++) {
        if (i != lastNonIncreasingIndex) {
            result += input[i];
        }
    }

    return result;
}

int main() {
    int testCases;
    cin >> testCases;

    while (testCases--) {
        int juhi;
        cin >> juhi;

        string inputString;
        cin >> inputString;

        string count = removeLastNonIncreasing(inputString);

        cout << count << endl;
    }

    return 0;
}
