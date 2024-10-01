#include <iostream>
#include <bitset>
#include <vector>
using namespace std;

void solve(long long n) {
    vector<string> result;
    int numCodes = 1 << n; // 2^n

    for (int i = 0; i < numCodes; ++i) {
        int grayCode = i ^ (i >> 1);
        result.push_back(bitset<16>(grayCode).to_string().substr(16 - n));
    }
    for (const auto &it : result) {
        cout << it << endl;
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
