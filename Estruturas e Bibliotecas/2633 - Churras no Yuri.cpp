#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sd second
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define boost ios_base::sync_with_stdio(false), cin.tie(NULL)
#define inp freopen("code.in", "r+", stdin)
#define out freopen("code.out", "w+", stdout)
#define debug(x) cout << "DEBUG: " << x << endl

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long int ll;

struct churras {
//Properties/Variables
    string meat;
    int validity;
    
//Methods
    string ToString() {
        return meat;
    }
};

int main()
{
    //inp;
    int n;
    while (scanf("%d", &n) != EOF) {
        const int sz = n;
        churras C[sz];  
        for (int i = 0; i < n; i++) {
            cin >> C[i].meat;
            scanf("%d", &C[i].validity);
        }
        sort(C, C + sz, [](churras a, churras b) {
            return a.validity < b.validity;
        });
        for (int i = 0; i < sz; i++)
            printf("%s%c", C[i].ToString().c_str(), ((i == n - 1) ? '\n' : ' '));
    }
}