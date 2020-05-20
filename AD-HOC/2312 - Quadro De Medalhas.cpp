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

struct medalsBoard {
//Properties/Variables
    int gold, silver, bronze;
    string country;
//Methods
    string ToString() {
        return country + " " + to_string(gold) + " " + to_string(silver) + " " + to_string(bronze);
    }
    medalsBoard() {
        gold = 0, silver = 0, bronze = 0;
    }
};

bool mycomparator(medalsBoard a, medalsBoard b)
{
    if (a.gold > b.gold)
        return 1;
    else if (b.gold > a.gold)
        return 0;
    else if (a.silver > b.silver)
        return 1;
    else if (b.silver > a.silver)
        return 0;
    else if (a.bronze > b.bronze)
        return 1;
    else if (b.bronze > a.bronze)
        return 0;
    return a.country < b.country;

}

int main()
{
    //inp;
    int t, gold, silver, bronze;
    string country;
    scanf("%d", &t);
    const int sz = t;
    medalsBoard mB[sz];
    for (int k = 0; k < t; k++) {    
        cin >> mB[k].country;
        scanf("%d %d %d ", &mB[k].gold, &mB[k].silver, &mB[k].bronze);
    }
    sort(mB, mB + sz, mycomparator);
    for (int i = 0; i < sz; i++)
        printf("%s\n", mB[i].ToString().c_str());
}