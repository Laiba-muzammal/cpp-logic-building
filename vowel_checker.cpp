#include <iostream>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    char ch;
    cout << "Enter an alphabet: ";
    cin >> ch;
    
    if (isalpha(ch)) {
        if (isVowel(ch)) {
            cout << ch << " is a vowel." << endl;
        } else {
            cout << ch << " is a consonant." << endl;
        }
    } else {
        cout << "Invalid input. Please enter an alphabet." << endl;
    }
    
    return 0;
}
