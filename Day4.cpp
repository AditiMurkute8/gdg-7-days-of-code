#include <iostream>
#include <vector>
using namespace std;

// Function to determine if passed students are strictly greater than 50% of total students
vector<string> checkPassPercentage(const vector<tuple<int, int, int>>& testCases) {
    vector<string> results;
    for (const auto& testCase : testCases) {
        int X, Y, Z;
        tie(X, Y, Z) = testCase;
        
        int totalStudents = X * Y;
        if (Z > totalStudents / 2) {
            results.push_back("YES");
        } else {
            results.push_back("NO");
        }
    }
    return results;
}

int main() {
    int T; // Number of test cases
    cin >> T;
    vector<tuple<int, int, int>> testCases(T);
    
    for (int i = 0; i < T; ++i) {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        testCases[i] = make_tuple(X, Y, Z);
    }
    
    vector<string> results = checkPassPercentage(testCases);
    
    for (const string& result : results) {
        cout << result << endl;
    }
    
    return 0;
}
