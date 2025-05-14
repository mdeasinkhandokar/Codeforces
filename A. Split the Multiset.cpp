#include <iostream>
#include <vector>
using namespace std;

int min_operations(int n, int k) {
    if (n == 1) {
        return 0;
    }

    int operations = 0;
    while (n > 1) {
        if (n % k == 0) {
            n /= k;
        } else {
            operations += n % k;
            n -= n % k;
        }
        operations++;
    }
    return operations - 1; // subtracting 1 because the final operation doesn't actually add new elements
}

int main() {
    int t;
    cin >> t;
    vector<int> results(t);

    for (int i = 0; i < t; ++i) {
        int n, k;
        cin >> n >> k;
        results[i] = min_operations(n, k);
    }

    for (int i = 0; i < t; ++i) {
        cout << results[i] << endl;
    }

    return 0;
}
