#include <algorithm>
#include <climits>
#include <cmath>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <vector>

using namespace std;

const int INF = INT_MAX;

int main()
{
    ios::sync_with_stdio(false);
    int t, n, c;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> c;
            switch (c - 1) {
            case 0:
                cout << "Rolien\n";
                break;
            case 1:
                cout << "Naej\n";
                break;
            case 2:
                cout << "Elehcim\n";
                break;
            case 3:
                cout << "Odranoel\n";
                break;
            }
        }
    }

    return 0;
}