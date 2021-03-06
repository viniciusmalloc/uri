#include <bits/stdc++.h>
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define RFOR(i, b, a) for (int i = b; i >= a; --i)
#define REP(i, N) for (int i = 0; i < N; ++i)
#define MAX 5010
#define pb push_back
#define mp make_pair

using namespace std;

char judge[110];

int main()
{
    int t;
    while (scanf("%d", &t) && t) {
        getchar();
        unordered_map<char, pair<int, bool>> quest;
        for (int a = 65; a <= 90; a++)
            quest[a] = mp(0, false);
        int resp = 0, qtd = 0;
        REP(i, t)
        {
            scanf(" %[^\n]", judge);
            int k = 2, time;
            string n, ans;
            while (true) {
                if (isdigit(judge[k]))
                    n += judge[k++];
                else {
                    k++;
                    break;
                }
            }
            istringstream buffer(n);
            buffer >> time;
            int judge_size = strlen(judge);
            while (k < judge_size)
                ans += judge[k++];
            if (ans == "incorrect")
                quest[judge[0]].first += 20;
            else if (ans == "correct" && !quest[judge[0]].second) {
                resp += quest[judge[0]].first + time;
                quest[judge[0]].second = true;
                qtd++;
            }
        }
        printf("%d %d\n", qtd, resp);
    }
    return 0;
}