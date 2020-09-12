/**
 * If someone (or me) ever sees this please know that this is the ugliest code i've ever written but
 * right now i don't care because it does what it is supposed to (don't ask me what or how) so yeah  
 **/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int tests, n, m;
    cin >> tests;

    while (tests--) {
        cin >> n >> m;
        
        int dist[30+30][2], mat[n][m];
        fill_n(*dist, 60*2, 0);
        int change = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> mat[i][j];
                if (mat[i][j] == 0) dist[i+j][0]++;
                else dist[i+j][1]++;
            }
        }

        for (int i = 0, j=n+m-2; ((n+m)%2 == 1 && i < (n+m)/2) || ((n+m)%2 == 0 && i < (n+m-2)/2); i++, j--) {
            if ((dist[i][0] != 0 && dist[i][1] != 0) || (dist[j][0] != 0 && dist[j][1] != 0) ||
                (dist[i][0] != 0 && dist[j][1] != 0) || (dist[j][0] != 0 && dist[i][1] != 0)) { 
                if (dist[i][0] + dist[j][0] < dist[i][1] + dist[j][1]) change += (dist[i][0] + dist[j][0]);
                else change += (dist[i][1] + dist[j][1]);
            }       
        }
        
        cout << change << endl;        
    }

    return 0;
}
