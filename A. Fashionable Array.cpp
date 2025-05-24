#include <iostream>
using namespace std;

int main() {
    int t; // number of test cases
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int even = 0, odd = 0;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            if (x % 2 == 0)
                ++even;
            else
                ++odd;
        }

        // Minimum removals needed to make min+max even
        cout << min(even, odd) << endl;
    }

    return 0;
}
