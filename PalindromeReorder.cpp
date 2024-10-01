#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

void solve(string s) {
    unordered_map<char, int> count;
    for (char c : s) {
        count[c]++;
    }

    int oddCount = 0;
    char oddChar = '\0';
    for (const auto &entry : count) {
        if (entry.second % 2 != 0) {
            oddCount++;
            oddChar = entry.first;
        }
    }

    if (oddCount > 1) {
        cout << "NO SOLUTION" << endl;
        return; // Return early if no solution
    }

    string halfPalindrome;
    for (const auto &entry : count) {
        halfPalindrome += string(entry.second / 2, entry.first);
    }

    string palindrome = halfPalindrome;
    if (oddCount == 1) {
        palindrome += oddChar;
    }
    reverse(halfPalindrome.begin(), halfPalindrome.end());
    palindrome += halfPalindrome;

    cout << palindrome << endl;
}

int main() {
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif

    string input;
    cin >> input; // Read the input string

    solve(input);
    return 0;
}
