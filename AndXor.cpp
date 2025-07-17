#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        if (a > b) {
            cout << -1 << endl;
            continue;
        }

        int minCost = INT_MAX;

        // Try up to (b - a) XOR steps
        for (int xorCount = 0; xorCount <= (b - a); xorCount++) {
            int curr = a;
            int cost = 0;

            // Apply XOR only if current is even
            int valid = 1;
            for (int i = 0; i < xorCount; i++) {
                if (curr % 2 == 0) {
                    curr ^= 1;
                    cost += y;
                } else {
                    valid = 0; // can't XOR if odd (goes backwards)
                    break;
                }
            }

            if (!valid || curr > b) continue;

            // Now use +1 to reach b
            int addSteps = b - curr;
            cost += addSteps * x;

            minCost = min(minCost, cost);
        }

        cout << minCost << endl;
    }

    return 0;
}
