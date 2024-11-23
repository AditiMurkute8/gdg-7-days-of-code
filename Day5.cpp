#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Input: size of the array
    int n;
    cin >> n;

    // Input: elements of the array
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Calculate the sum of positive numbers
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] > 0) {
            sum += A[i];
        }
    }

    // Output the result
    cout << sum << endl;

    return 0;
}
