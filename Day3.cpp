#include <iostream>
using namespace std;

void printFooBar(int a, int b) {
    for (int num = a; num <= b; ++num) {
        if (num % 5 == 0 && num % 7 == 0) {
            cout << "FooBar" << endl;
        } else if (num % 5 == 0) {
            cout << "Foo" << endl;
        } else if (num % 7 == 0) {
            cout << "Bar" << endl;
        } else {
            cout << "Baz" << endl;
        }
    }
}

int main() {
    int a, b;
    cout << "Enter the start of the range: ";
    cin >> a;
    cout << "Enter the end of the range: ";
    cin >> b;

    printFooBar(a, b);

    return 0;
}
