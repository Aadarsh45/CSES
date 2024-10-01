    
//       CSES Problem Set
//       Two Sets


// Your task is to divide the numbers 1,2,\ldots,n into two sets of equal sum.
// Input
// The only input line contains an integer n.
// Output
// Print "YES", if the division is possible, and "NO" otherwise.
// After this, if the division is possible, print an example of how to create the sets. First, print the number of elements in the first set followed by the elements themselves in a separate line, and then, print the second set in a similar way.
// Constraints

// 1 \le n \le 10^6

// Example 1
// Input:
// 7

// Output:
// YES
// 4
// 1 2 4 7
// 3
// 3 5 6
// Example 2
// Input:
// 6

// Output:
// NO

#include <iostream>
#include <vector>
using namespace std;

void print(const vector<int>& arr) {
    for (auto it : arr) {
        cout << it << " ";
    }
    cout << endl;
}

void s1(long long temp, int n) {
    vector<int> r1;
    vector<int> r2;
    while (n > 0) {
        if (temp >= n) {
            temp -= n;
            r1.push_back(n);
        } else {
            r2.push_back(n);
        }
        n--;
    }

    int a = r1.size();
    int b = r2.size();

    cout << a << endl;
    print(r1);
    cout << b << endl;
    print(r2);
}

void solve(long long n) {
    long long temp = n * (n + 1) / 2;
    if (temp % 2 == 0) {
        cout<<"YES"<<endl;
        s1(temp / 2, n);
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif
    long long n;
    cin >> n;

    solve(n);
    return 0;
}
