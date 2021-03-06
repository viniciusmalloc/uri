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
    int n;
    cin >> n;
    while (n--) {
        double a, b, c, d;
        cin >> a >> b >> c >> d;
        double ans = trunc(((d - b) / (c - a)) * 100) / 100;
        ostringstream buffer;
        buffer << fixed << setprecision(2) << ans;
        string pA = buffer.str();
        pA[pA.size() - 3] = ',';
        cout << pA << endl;
    }
    return 0;
}