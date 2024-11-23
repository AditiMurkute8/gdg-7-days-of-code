#include <iostream>
#include <string>
#include <cctype> // for tolower

using namespace std;

int main() {
    string S;
    // Read the input string
    getline(cin, S);

    int vowelCount = 0;

    // Loop through each character in the string
    for (char c : S) {
        // Convert character to lowercase and check if it is a vowel
        char lowerChar = tolower(c);
        if (lowerChar == 'a' || lowerChar == 'e' || lowerChar == 'i' || lowerChar == 'o' || lowerChar == 'u') {
            vowelCount++;
        }
    }

    // Print the total count of vowels
    cout << vowelCount << endl;

    return 0;
}
