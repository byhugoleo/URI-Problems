#include <bits/stdc++.h>

using namespace std;

#define ft first
#define sd second
#define pb push_back
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define boost ios_base::sync_with_stdio(false), cin.tie(NULL)
#define inp freopen("code.in", "r+", stdin)
#define out freopen("code.out", "w+", stdout)

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef long long int ll;

bool inGrid(int x, int y, int n, int m, char c) 
{
    if (x >= n or y >= m or x < 0 or y < 0 or c == '#')
        return false;
    return true;
}

int compute_dir(char c) 
{
    return (c == 'N' ? 0 : (c == 'L') ? 1 : (c == 'S') ? 2 : 3);
}

int main()
{
    //inp;
    int n, m, s, curdir;
    ii curpos;
    char arena[100][100], com, dir[5] = {'N', 'L', 'S', 'O', '\0'};
    while (scanf("%d %d %d", &n, &m, &s), n and m and s) {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++) {
                scanf(" %c", arena[i] + j);
                if (isalpha(arena[i][j])) {
                    curdir = compute_dir(arena[i][j]);
                    arena[i][j] = '.';
                    curpos = {i, j};
                }
            }
        int ans = 0;
        for (int i = 0; i < s; i++) {
            scanf(" %c", &com);
            if (com == 'D')
                curdir = compute_dir(dir[(curdir + 1) % 4]);
            else if (com == 'E')
                curdir = compute_dir(dir[(curdir - 1 + 4) % 4]);
            else {
                int newx = curpos.ft, newy = curpos.sd;
                if (curdir == 0 and inGrid(newx - 1, newy, n, m, arena[newx - 1][newy]))
                    curpos = {newx - 1, newy}; //cout << "N" << endl;
                else if (curdir == 1 and inGrid(newx, newy + 1, n, m, arena[newx][newy + 1]))
                    curpos = {newx, newy + 1}; //cout << "L" << endl;
                else if (curdir == 2 and inGrid(newx + 1, newy, n, m, arena[newx + 1][newy]))
                    curpos = {newx + 1, newy}; //cout << "S" << endl;
                else if (curdir == 3 and inGrid(newx, newy - 1, n, m, arena[newx][newy - 1]))
                    curpos = {newx, newy - 1}; //cout << "O" << endl;
                if (arena[curpos.ft][curpos.sd] == '*')
                    ans++;
                arena[curpos.ft][curpos.sd] = '.';
            }
            //printf("Curdir -> %d\n", curdir); 
        }
        printf("%d\n", ans);
    }
}