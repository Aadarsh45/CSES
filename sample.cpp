#include <iostream>
#include <vector>
using namespace std;
 
void printarr(const vector<int>& arr) {
    for (auto it : arr) {
        cout << it << " ";
    }
    cout << endl;
}


 
void solve(long long n) {
    
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
