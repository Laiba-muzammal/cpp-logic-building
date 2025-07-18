#include <iostream>
using namespace std;

int main() {
    int n, reversed = 0;

    cout << "Enter an integer: ";
    cin >> n;

    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    cout << "Reversed number = " << reversed;
    return 0;
}
