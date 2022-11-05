#include <bits/stdc++.h>
using namespace std;

#define PB push_back
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define sortt(x) sort(all(x))
#define sortn(x, n) sort((x), (x) + (n))
#define SQ(a) ((a) * (a))
#define max3(a, b, c) max((a), max((b), (c)))
#define max4(a, b, c, d) max(max3(a, b, c), d)
#define min3(a, b, c) min((a), min((b), (c)))
#define min4(a, b, c, d) min(min3(a, b, c), d)

#define FOR(i, a, b) for(int i = (a); i <  (b); (i)++)
#define ROF(i, a, b) for(int i = (a); i >= (b); (i)--)
#define REP(i, a, b) for(int i = (a); i <= (b); (i)++)
#define EACH(x, xs)  for(auto &x : (xs))

#define endl "\n"

typedef pair<int, int> ii;
typedef tuple<long long, long long, long long> tiii;
typedef pair<long long, long long> pll;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef vector<bool> vb;
typedef vector<ll> vl;
typedef vector<string> vs;

// >>>>>>>>>> debugging >>>>>>>>>>
#ifdef LOCAL
    #include DEBUG
#else
    #define debug(x...)
#endif
// <<<<<<<<<< debugging <<<<<<<<<<

void _() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifdef LOCAL
    FILE* avoidW;
    avoidW = freopen("input.txt",  "r", stdin);
    avoidW = freopen("output.txt", "w", stdout);
    avoidW = freopen("error.txt",  "w", stderr);
#endif
}

const ll inf = INT64_MAX;
const int MOD = 1e9 + 7;
const int dx[4]{1,0,-1,0}, dy[4]{0,1,0,-1};

void test_case() {
    int n;
}

int main() {
    _();

    int t = 1;
    cin >> t;

    REP(i, 1, t) {
        test_case();
    }

    return 0;
}