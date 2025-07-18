#include <iostream>
using namespace std;

int findLargest(int a, int b, int c) {
    if (a == b && b == c) {
        return -1; // All equal
    }
    return max(a, max(b, c));
}

int main() {
    int x, y, z;
    cout << "Enter 3 numbers: ";
    cin >> x >> y >> z;
    
    int largest = findLargest(x, y, z);
    if (largest == -1) {
        cout << "All numbers are equal" << endl;
    } else {
        cout << largest << " is the largest number" << endl;
    }
    
    return 0;
}
