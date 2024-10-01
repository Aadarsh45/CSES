#include <iostream>
using namespace std;

void solve(int n, int from_rod, int to_rod, int aux_rod) {
    if (n == 1) {
        cout << from_rod << " " << to_rod << endl;
        return;
    }
    solve(n - 1, from_rod, aux_rod, to_rod);
    cout << from_rod << " " << to_rod << endl;
    solve(n - 1, aux_rod, to_rod, from_rod);
}

int main() {
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif

    int n;
    cin >> n;
    int temp = (1 << n); // Using bitwise shift to calculate 2^n

    cout << temp - 1 << endl;

    solve(n, 1, 3, 2);
    return 0;
}
