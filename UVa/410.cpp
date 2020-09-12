#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int c, s, x = 1;

    while (cin >> c >> s) {
        vector<int> masses;

        int temp, i = 0;
        double average = 0, imbalance = 0;
        for (; i < s; i++) {
            scanf("%d", &temp);
            average += temp;
            masses.push_back(temp);
        } 
        
        while (i++ < 2*c) masses.push_back(0);
        sort(masses.begin(), masses.end());
        average /= c;

        printf("Set #%d\n", x++);
        for (int b = 0, e = masses.size()-1, i = 0; i < c; i++, b++, e--) {
            if (masses[b] == 0 && masses[e] == 0) printf(" %d:\n", i);
            else if (masses[b] == 0) printf(" %d: %d\n", i, masses[e]);
            else printf(" %d: %d %d\n", i, masses[b], masses[e]);
            imbalance += abs(masses[b] + masses[e] - average);
        }

        printf("IMBALANCE = %.5f\n\n", imbalance);
    }

    return 0;
}
