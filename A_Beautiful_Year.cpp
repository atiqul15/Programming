#include <iostream>
#include <set>
using namespace std;

bool Digits(int year) {
    set<char> digits;
    string yearStr = to_string(year);
    for (char digit : yearStr) {
        if (digits.find(digit) != digits.end())
            return false;
        digits.insert(digit);
    }
    return true;
}

int main() {
    int y;
    cin >> y;

    while (true) {
        y++; 
        if (Digits(y)) {
            cout << y << endl;
            break;
        }
    }

    return 0;
}
