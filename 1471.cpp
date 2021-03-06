#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#define mp make_pair
#define pb push_back
#define MAXV 200100
#define PI 3.14159
#define TWOPI 2 * PI

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef long long int64;

int main()
{
    ios::sync_with_stdio(false);
    int a, b, x;
    int casos = 0;
    while (cin >> a >> b) {
        map<int, int> divers;
        for (int i = 0; i < b; i++) {
            cin >> x;
            divers[x] = 1;
        }
        int c = 0;
        for (int i = 1; i <= a; i++) {
            if (!divers.count(i)) {
                c++;
                cout << i << " ";
            }
        }
        if (c == 0)
            cout << "*";
        cout << endl;
    }
    return 0;
}