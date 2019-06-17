
#include <iostream>
#include <set>
#include <map>
#include <vector>




using namespace std;

#define sz(arr) (int)arr.size()
#define all(x) (x).begin(),(x).end()
#define ll long long
#define pii pair<int,int>
#define f first
#define s second
#define y1 Emilia
#define forit(s) for(__typeof(s.begin()) it = s.begin(); it != s.end(); it ++)


#define N 1111
#define system ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int inf = (int)1e9;
const int mod = inf + 7;

int t, R, C, k;

char arr[111][111];

void solve(int test){
    cin >> R >> C >> k;
    if(k == R * C - 1){
        cout << "Case #" << test << ": " << "IMPOSSIBLE\n";
        return;
    }
    if(C == 1){
        for(int i = 1; i <= k; ++i) arr[i][1] = 'N';
        for(int i = k + 1; i <= R; ++i) arr[i][1] = 'S';
        arr[R][1] = 'N';
    }
    else{
        int r1 = 0, c1 = 0;
        for(int i = 1; i <= R; ++i){
            if(k >= C){
                for(int j = 1; j <= C; ++j) arr[i][j] = 'W';
                k -= C;
                continue;
            }
            else{
                for(int j = 1; j <= k; ++j) arr[i][j] = 'W';
                r1 = i;
                c1 = k + 1;
                break;
            }
        }
        for(int i = r1; i <= R; ++i){
            int lim = 1;
            if(i == r1) lim = c1;
            for(int j = lim; j <= C; ++j){
                if(j == C) arr[i][j] = 'S';
                else arr[i][j] = 'E';
            }
        }
        if(k != R * C)
        arr[R][C] = 'W';
    }
    cout << "Case #" << test << ": " << "POSSIBLE\n";
    for(int i = 1; i <= R; ++i){
        for(int j = 1; j <= C; ++j)
            cout << arr[i][j];
        cout << "\n";
    }
}
int main(){
    system
    cin >> t;
    for(int i = 1; i <= t; ++i){
        solve(i);
    }
    return 0;
}
