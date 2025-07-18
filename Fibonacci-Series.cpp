#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int terms;
    cout << "Enter the number of terms: ";
    cin >> terms;
    
    cout << "Fibonacci Series up to " << terms << " terms:\n";
    for (int i = 0; i < terms; ++i) {
        cout << fibonacci(i) << " ";
    }
    
    return 0;
}
