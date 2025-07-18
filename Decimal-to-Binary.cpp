#include <iostream>
#include <string>
using namespace std;

string decimalToBinary(int decimal) {
    if (decimal == 0) return "0";
    
    string binary;
    while (decimal > 0) {
        int remainder = decimal % 2;
        binary = to_string(remainder) + binary;
        decimal /= 2;
    }
    return binary;
}

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    
    if (decimal < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1;
    }
    
    string binary = decimalToBinary(decimal);
    cout << decimal << " in decimal = " << binary << " in binary" << endl;
    
    return 0;
}
