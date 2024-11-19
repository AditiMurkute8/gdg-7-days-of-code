#include <iostream>
using namespace std;

void printPyramid(int N) {
     N=3;
    for (int i = 1; i <= N; ++i) {
        
        int numSpaces = N - i;
        int numStars = 2 * i - 1;
        
    
        for (int j = 0; j < numSpaces; ++j) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < numStars; ++j) {
            cout << "*";
        }
        
        cout << endl;
    }
}

int main() {
    int N;
    cout << "Enter the height of the pyramid (N): ";
    cin >> N;
    printPyramid(N);
    return 0;
}
