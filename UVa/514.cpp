#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    while (cin >> n) {
        if (n == 0) break;

        while (true) {
            vector<int> line;
            stack<int> station;

            for (int temp, i = 0; i < n; i++) {
                cin >> temp;
                line.push_back(temp);
                if (line[0] == 0) break;
            }

            if (line[0] == 0) break;

            int curr = 0;
            for (int next = 1; next <= line.size(); next++) {
                station.push(next);
                while (!station.empty() && line[curr] == station.top() && curr <= line.size()) {
                    station.pop();
                    curr++;
                }
            }

            cout << (station.empty() ? "Yes" : "No") << endl;    
        }

        cout << endl;
    }

    return 0;
}