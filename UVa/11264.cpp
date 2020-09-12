#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t, n, temp;
    cin >> t;

    while (t--) {
        vector<int> coins;
        int sum = 0;
        cin >> n;
    
        while (n--) {
            cin >> temp;
            coins.push_back(temp);
        }

        int ans = coins.size() > 1 ? 1 : 0;
        for (int i = 0; i < int(coins.size())-1; i++) {
            if (sum + coins[i] < coins[i+1]) {
                sum += coins[i];
                ans++;
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}
